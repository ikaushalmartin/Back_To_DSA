#include<iostream>
using namespace std;

int main(){
int arr[6]={1,2,0,7,2};
 int sum;
for(int i=0;i<6;i++){
   sum=0; 
    for(int j=i;j<6;j++){
        sum=sum+arr[j];
        cout<<"Sum of subset {"<<arr[i]<<" till "<<arr[j]<<"} is : "<<sum<<endl;
    }
}
}