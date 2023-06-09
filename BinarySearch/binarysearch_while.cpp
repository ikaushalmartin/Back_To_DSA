#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int start=0,end=n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid=(start+end)/2;
    }

return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int key=3;
    int index=binarysearch(odd,5, key);
    cout<<endl<<"Index - > "<<index;
}