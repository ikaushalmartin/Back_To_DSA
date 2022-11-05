#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int k){
    
    int start=0, end=n;
    int mid=(start+end)/2;
    for(mid;start<=end;mid=(start+end)/2){
        cout<<"MID"<<mid<<" start"<<start<<" end"<<end;

       if(arr[mid]==k){
           return mid;
       }

       if(arr[mid]>k){
            
           end=mid-1;
       }
       else{
           start=mid+1;
       }

       mid=(start+end)/2;
       
    }

    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int key=16;
    int index=binarysearch(odd,5, key);
    cout<<endl<<"Index - > "<<index;
}