#include<iostream>
using namespace std;

int first(int arr[], int n, int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
 
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }

        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
        mid=start+(end-start)/2;
    }

return ans;
}
int last(int arr[], int n, int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
  
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }

        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
        mid=start+(end-start)/2;
    }

return ans;
}


int main(){
    
    int odd[8]={0,1,2,2,2,2,2,2};
   
    int key=2;
  int x=first(odd,8, key);
  int y=last(odd,8, key);
  cout<<(y-x)+1;
   
}