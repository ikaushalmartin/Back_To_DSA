#include<iostream>
#include <vector>
using namespace std;

 void subset(vector<int>arr,int index,vector<int>output,vector<vector<int>>&ans,int size){
    if(index>=arr.size()){
        ans.push_back(output);
        return;
    }

    subset(arr,index+1,output,ans,size);

    output.push_back(arr[index]);
    subset(arr,index+1,output,ans,size);

    

}

int main(){
    vector<int>arr={1,2,3};
    vector<int>output;
    vector<vector<int>>ans;
    subset(arr,0,output,ans,arr.size());

   cout<<ans[0][1];
    }

