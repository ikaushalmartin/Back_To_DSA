#include<iostream>
using namespace std;

int main(){
    int arr[6]={-1,3,4,2,8,9};
    int x=0;
    for(int i=x+1;i<6;i++){
        cout<<arr[x]<<" "<<arr[i]<<endl;
        x++;
    }
}