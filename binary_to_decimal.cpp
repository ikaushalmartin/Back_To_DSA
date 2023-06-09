#include<iostream>
using namespace std;

int main(){
     
    int arr[4]={1,0,1,0};
    
    int ans=0;
    int b=1;
    for(int i=3;i>=0;i--){
        ans=ans+arr[i]*b;
        b=b*2;
        //cout<<ans<<" ";
    }

    cout<<ans;


 



}