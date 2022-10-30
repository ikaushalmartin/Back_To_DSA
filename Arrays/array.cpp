#include <iostream>
using namespace std;



int largestint(int arr[], int n){
  int x=0;
for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
 if(arr[i]>x){
     x=arr[i];
 }
}
return x;
}



int smallestnum(int arr[], int n){
  int x=arr[0];
for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
 if(x>arr[i]){
     x=arr[i];
 }
}
return x;
}




int main(){
    int arr[4]={4,-12,8,10};
   
int maxnum=largestint(arr,4);
int minnum=smallestnum(arr,4);

cout<<endl<<"Maxnum = "<<maxnum;
cout<<endl<<"Minnum = "<<minnum;


     
    


}