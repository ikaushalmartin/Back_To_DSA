#include<iostream>
using namespace std;

int sumofelement(int arr[], int n){

int x;

for(int i=0;i<n;i++){
    x=x+arr[i];
}
return x;
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

  cout<<"Sum of each element : "<<sumofelement(arr,n);

}
