#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main() {
    map<char, int> m;
    queue<char> q;
    string s = "aabb";
    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
        q.push(s[i]);

        while (!q.empty())
        {
            if(m[q.front()]>1){
                q.pop();
            }else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
        
    }

   

    cout << ans;
}
