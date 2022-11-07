#include<iostream>
using namespace std;

int max(int arr[],int n){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
   return start;
}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={1,2,3,5,4};
    int key=1;
    int index=max(odd,5);
    cout<<endl<<"element - > "<<index;
}