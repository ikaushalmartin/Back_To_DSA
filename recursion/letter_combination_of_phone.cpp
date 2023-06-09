#include<iostream>
#include<vector>
using namespace std;

void solve(string digit,  vector<string> &ans, string output, vector<string> mapping, int index){


if(index==digit.size()){
    ans.push_back(output);
    return;
}

int digit_from_str=digit[index]-'0';
string str_from_mapping=mapping[digit_from_str];

for(int i=0;i<str_from_mapping.size();i++){
    output.push_back(str_from_mapping[i]);
    solve(digit,ans,output,mapping,index+1);
    output.pop_back();
}

}

int main(){
    string digit="23";
    vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};   
     vector<string> ans;
    string output;
    solve(digit,ans,output,mapping,0);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }
   }