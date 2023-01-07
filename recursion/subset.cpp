#include<iostream>
#include <vector>
using namespace std;

void subset(vector<int>arr,int index,vector<int>&output,vector<vector<int>>&ans,int size){
    if(index>size){
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
    subset(arr,0,output,ans,3);

     for (int i = 0; i < ans.size(); i++) {
        for (
            auto it = ans[i].begin();
            it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    }

