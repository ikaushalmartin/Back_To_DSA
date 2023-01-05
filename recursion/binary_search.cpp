#include<iostream>
using namespace std;

int binarysearch(int arr[], int start,int end, int key){
int mid=(start+end)/2;
    if(start>=end){
        return -1;
    } 


    if(key==arr[mid]){
        return mid;
    }


    else if(arr[mid]<key){
        binarysearch(arr,mid+1,end,key);
    }
    else{
        binarysearch(arr,start,mid-1,key);
    }
    

}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<binarysearch(arr,1,5,2);
}