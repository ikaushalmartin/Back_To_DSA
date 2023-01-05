#include<iostream>
using namespace std;


int sum=0;
int sumofarray(int arr[], int size){

if(size==0){
  //   cout<<arr[size]<<"          "<<endl;
    return 0;
}
else if(size==1){
 //   cout<<arr[size-1]<<"          "<<endl;
    return arr[0];
}

 


int remaining=sumofarray(arr+1, size-1);
sum=arr[0]+remaining;
return sum;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<"Sum ---->"<<sumofarray(arr,5);
}