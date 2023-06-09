#include<iostream>
using namespace std;

bool x;static int check=-1;
/*void ans(int arr[], int n,int index){
cout<<"index ->"<<arr[index]<<"     check"<<check<<"    x"<<x<<endl;
    if(index>=n-1){
        return;
    }
    
    if(arr[index+1]>arr[index]){
        if(check==-1){
             x=true;
        }
       
    
    }else{
        
        x=false;
        check=100;
    }
    ans(arr,n,index+1);

}*/

/* 
bool ans(int arr[],int n, int index){

        if(index==n-1){
            return true;
        }

    if(arr[index]<arr[index+1]){
          
     return ans(arr,n,index+1);
    }else{
        return false;
    }
}

*/

bool ans(int arr[],int n, int index){

        if(index==n-1){
            return true;
        }

     if(arr[index]>=arr[index+1]){
        return false;  
     
    } 
    return ans(arr,n,index+1);
}


int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    cout<<ans(arr,10,0);
   // cout<<x;


}