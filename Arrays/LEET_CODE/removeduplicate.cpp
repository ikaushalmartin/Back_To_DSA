#include<iostream>
#include <vector>
using namespace std;

void twovalue(int nums[],int x[],int n){
       
   int y=0;
     
      
      for(int i=0;i<n;i++){
          if(nums[i]!=nums[i+1]){
              x[y++]=nums[i];
          }
      }

        for(int i=0;i<y;i++){
            cout<<x[i]<<" ";
        }
 
       
        
}

int main(){
    
     int n;
  cout<<"Enter Number Of Element : ";
  cin>>n;
  int arr[n];
  int x[n];
  cout<<endl<<"Enter the "<<n<<" number of element : ";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
   
  twovalue(arr,x,n);
  cout<<endl;
  
   
 
}        

        