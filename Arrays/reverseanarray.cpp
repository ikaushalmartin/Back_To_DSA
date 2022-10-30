#include<iostream>
using namespace std;

void reversedarray(int arr[], int n){
    int x;
    int e=n-1;
    for(int i=0;i<n/2;i++,e--){
    x=arr[i];    
    arr[i]=arr[e];
    arr[e]=x;
    cout<<"X -> "<<x <<" "<<"arr[i] -> "<<arr[i] <<" "<<"arr[n-i] -> "<<arr[i+1]<< " "<<endl;

    }
}

int main(){
  int n;
  cout<<"Enter Number Of Element : ";
  cin>>n;
  int arr[n];
  cout<<endl<<"Enter the "<<n<<" number of element : ";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
reversedarray(arr,n);
 for(int i=0;i<n;i++){
      cout<<arr[i];
  }
//cout<<"Reversed Array --> "<<arr;
}