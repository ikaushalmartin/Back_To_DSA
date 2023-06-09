#include<iostream>
using namespace std;

int main(){
    int arr[6]={12,45,23,51,19,8};
    int temp;

    for(int i=1;i<6;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}