#include<iostream>
using namespace std;

int main(){
    int arr[6]={12,45,23,51,19,8};
int temp;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}