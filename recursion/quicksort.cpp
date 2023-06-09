#include<iostream>
using namespace std;

int pivot(int arr[], int start, int end){

    int pivot=arr[start];
    int counter=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            counter++;
        }
    }

    swap(arr[start+counter],arr[start]);

    int i=start,j=end;

    while(i<start+counter &&j>start+counter){

        while(arr[i]<pivot){ 
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i>start+counter && j<start+counter){
            swap(arr[i],arr[j]);
            i++;j--;
        }
    }

return start+counter;


}





void quicksort(int arr[],  int start, int end){
    if(start>=end){
        return;
    }

    int p=pivot(arr,start,end);

    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);

}

int main(){
    int arr[4]={6,2,4,1};
    int n=4;
    quicksort(arr,0,n-1);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}