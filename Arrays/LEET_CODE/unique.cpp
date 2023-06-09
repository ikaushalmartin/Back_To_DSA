#include<iostream>
using namespace std;

 
void findunique(int arr[], int n){
int temp=0;
for(int i=0;i<n;i++){
    temp=temp^arr[i];
}
 cout<<temp;
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

    findunique(arr, n);
    
}