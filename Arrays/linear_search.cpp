#include<iostream>
using namespace std;

bool linearsearch(int arr[], int n, int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return true;
    }
  }
  return false;
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
  cout<<"Enter the element you want to search : ";
  int key;
  cin>>key;

  bool x=linearsearch(arr,n,key);

  if(x==true){
    cout<<"Element is present";
  }
  else{
    cout<<"Element is absent";
  }
}