#include<iostream>
using namespace std;

void merg(int *arr, int start, int end){

    int mid=start+(end-start)/2;
    int len1=mid-start+1;
    int len2=end-mid;



    int *arr1=new int [len1];
    int *arr2=new int [len2];
     int counter1=0, counter2=0;

    int k=start;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[k];
        k++;
    }

    k=mid+1;

    for(int i=0;i<len2;i++){
        arr2[i]=arr[k];
        k++;
    }

 
 
for(int i=0;i<len2;i++){
        cout<<arr1[i]<<" ";
    }
    
    int index=start;
    while(len1>counter1&&len2>counter2){
        
        if(arr1[counter1]<arr2[counter2]){
            arr[index]=arr1[counter1];
        counter1++;
        index++;
        }
        else  {
            arr[index]=arr2[counter2];
            counter2++;index++;
        }
    }

    while(len1>counter1){
        arr[index]=arr1[counter1];
         counter1;
         index++;
    }

    while (len2>counter2)
    {
        arr[index]=arr2[counter2];
         counter2++;
         index++;
    }
    
    delete []arr1;
    delete []arr2;


}


void mergsort(int *arr, int start, int end){

  

    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    mergsort(arr,start,mid);
    mergsort(arr,mid+1,end);


    merg(arr,start,end);

}

int main(){
    int arr[6]={3,4,5,1,9,2};

    mergsort(arr,0,5);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}