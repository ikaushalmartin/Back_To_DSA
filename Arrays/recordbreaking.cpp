#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,2,0,7,2,0,2,2};
    int max=0;
    for(int i=0;i<8;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]>=max&&arr[i]>arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

}