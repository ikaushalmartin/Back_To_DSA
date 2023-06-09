#include<iostream>
using namespace std;

 
int pivotelement(int arr[], int n){
   int sum=0,leftsum=0;
   for(int i=0;i<n;i++){
       sum=sum+arr[i];
   }

   for(int i=0;i<n;i++){
       if(leftsum==sum-leftsum-arr[i]){
           return i;
       }
       leftsum=leftsum+arr[i];
   }
   return -1;
}


int main(){
 
    int arr[6]={-1,-1,-1,-1,-1,0};
  int index=pivotelement(arr,6);
   cout<<endl<<"Index - > "<<index;
}