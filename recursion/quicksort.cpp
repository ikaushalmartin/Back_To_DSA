#include<iostream>
using namespace std;

int pivot(int arr[], int start, int end){

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
    int arr[6]={4,1,5,3,2,8};
    int n=6;
    quicksort(arr,0,n-1);

}