#include<iostream>
using namespace std;
int main(){

    int arr[6]={1,0,5,8,2,3};
        int counter=INT16_MIN;
    
    for(int i=0;i<=2;i++){
        if(arr[i]>counter){
            counter=arr[i];
        }
    }

    cout<<counter;

}