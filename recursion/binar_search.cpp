#include<iostream>
using namespace std;


bool binarysearch(int arr[], int n, int key, int start, int end){
    
    int mid=(start+end)/2;

    
    if(n==0 || mid<0 || start>=end){
        return false;
    }
    else{

        if(arr[mid]==key){
            return true;
        }
        else if(arr[mid]<key){
            binarysearch(arr,n,key,mid+1,end);
        }
        else{
            binarysearch(arr,n,key,start,mid-1);
        }

    }

 

}


int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<binarysearch(arr,6,40, 0,6);
}