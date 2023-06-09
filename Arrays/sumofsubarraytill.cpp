#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,7,5,6};
    int start=0, end=0;
    int sum=12,tempsum;

    for(int i=0;i<6;i++){   
        if(i<4){
        tempsum+=arr[i+1];
        }

        if(arr[start]+tempsum==sum){
            cout<<start<<" "<<i+1;
            break;
        }
        else if(arr[start]+tempsum>sum){
            tempsum=0;
            i=start;
            start++;
        }

       // cout<<arr[start]+tempsum<<" "<<endl;
        
        
       
     
}
}
