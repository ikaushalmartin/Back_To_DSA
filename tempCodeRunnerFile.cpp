#include<iostream>
using namespace std;


bool arr[26]={0};

void removeduplicates(string a, int index, string &ans){

if(index>=a.length()){
    return;
}

int curidx=a[index]-'a';
 cout<<curidx<<"        "<<a[curidx]<<endl;
if(arr[curidx]==0){
    ans.push_back(a[index]);
    arr[curidx]=true;
}

removeduplicates(a,index+1,ans);

}

int main(){
    string a="bcabc";
    string ans="";
    removeduplicates(a,0,ans);
cout<<ans;
}