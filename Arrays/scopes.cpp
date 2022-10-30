#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<endl<<"Entering into update function";
    arr[0]=100;
    arr[1]=100;
    arr[2]=100;
    cout<<endl<<"going back to main function"<<endl;


}

int main(){


int arr[3]={10,20,30};


cout<<"In main"<<endl;
for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;


update(arr,3);
cout<<endl;
cout<<"back In Main"<<endl;
for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}


}