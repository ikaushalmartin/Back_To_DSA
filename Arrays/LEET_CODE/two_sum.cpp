#include<iostream>
#include <vector>
using namespace std;

int twovalue(int nums[],int n, int target,int x[]){
      
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    x[0]=i;
                    x[1]=j;
                }
                    
            }
        }
        return 0;
}

int main(){
    int x[2];
     int n;
  cout<<"Enter Number Of Element : ";
  cin>>n;
  int arr[n];
  cout<<endl<<"Enter the "<<n<<" number of element : ";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<"Enter the target : ";
  int key;
  cin>>key;

  twovalue(arr,n,key,x);
   for(int i=0;i<2;i++){
       cout<<x[i]<<" ";
   }
 
}        

        