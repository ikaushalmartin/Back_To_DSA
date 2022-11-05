#include<iostream>
using namespace std;

 
void swapalter(int arr[], int n){
int temp;
for(int i=0;i<n-1;i+=2){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the number of element you want in array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<n;i++){
cin>>arr[i];
    }

    swapalter(arr, n);
    
}