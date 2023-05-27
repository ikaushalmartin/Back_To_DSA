#include <iostream>
#include <fstream>
#include <windows.h>
#include <shellapi.h>

using namespace std;

int main()
{
    // Check if the program is already running with administrator privileges
    BOOL isAdmin = FALSE;
    SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;
    PSID AdministratorsGroup;
    if (AllocateAndInitializeSid(&NtAuthority, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &AdministratorsGroup))
    {
        if (!CheckTokenMembership(NULL, AdministratorsGroup, &isAdmin))
        {
            isAdmin = FALSE;
        }
        FreeSid(AdministratorsGroup);
    }

    // If the program is not running with administrator privileges, relaunch it as an administrator
    if (!isAdmin)
    {
        wchar_t szPath[MAX_PATH];
        if (GetModuleFileNameW(NULL, szPath, ARRAYSIZE(szPath)))
        {
            SHELLEXECUTEINFOW sei = { sizeof(sei) };
            sei.lpVerb = L"runas";
            sei.lpFile = szPath;
            sei.hwnd = NULL;
            sei.nShow = SW_NORMAL;
            if (!ShellExecuteExW(&sei))
            {
                DWORD dwError = GetLastError();
                if (dwError == ERROR_CANCELLED)
                {
                    std::cout << "The user refused to allow the program to run with administrator privileges." << std::endl;
                }
            }
            else
            {
                return 0;
            }
        }
    }

    // Set the file path and name
    wstring filePath = L"C:\\Windows\\System32\\drivers\\etc\\hosts";

    // Open the file in append mode
    wofstream outFile(filePath.c_str(), ios::app);

    // Check if the file was opened successfully
    if (!outFile.is_open())
    {
        wcout << L"Error: could not open file." << endl;
        return 1;
    }

    // Write to the end of the file
    outFile << L"172.16.90.140 www.google.com" << endl;

    // Close the file
    outFile.close();

    return 0;
}