#include<iostream>
using namespace std;

int main(){
    int arr[6]={12,45,23,51,19,8};
    int temp;

    for(int i=1;i<6;i++){
        for(int j=0;j<6-i;j++){
                 if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
 for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}