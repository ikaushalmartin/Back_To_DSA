#include<iostream>
using namespace std;

int main(){
    int decimal=5;
    int arr[10]={};
    
    int i=0;
    while(decimal>0){
        
      
        arr[i]=decimal%2;
        decimal=decimal/2;
        i++;
        //cout<<decimal<<" ";

    }


for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}




}