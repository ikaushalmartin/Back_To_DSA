#include<iostream>
using namespace std;

int main(){
    string str="abc";
    int index=1;
    for(int i=index+1;i!=index;i++){
        if(i>=str.size()){
            i=0;

        }
        cout<<i<<" ";
    }
   }