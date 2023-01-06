#include<iostream>
#include <array>
using namespace std;



 void sortarr(int arr[],int start, int end){

     
     int mid=start+(end-start)/2;
     int len1=mid-start+1;
     int len2=end-mid;
  



    int arr1[len1];
    int arr2[len2];

    for(int i=0;i<len1;i++){
        arr1[i]=arr[start+i];
    }

    for(int i=0;i<len2;i++){
        arr2[i]=arr[mid+1+i];
    }
    

 
 
    int counter1=0,counter2=0;
    int i=0;
    array<int,12>finalarr;

        while(counter1<len1 && counter2<len2){
             //cout<<"counter1 ->"<<arr1[counter1]<<" "<<"counter2 ->"<<arr2[counter2]<<" "<<"i"<<i<<endl;
                    if(arr1[counter1]<arr2[counter2]){
                        finalarr[i]=arr1[counter1];
                        
                        counter1++;
                    }else if (arr2[counter2]<arr1[counter1]){
                        finalarr[i]=arr2[counter2];
                        counter2++;
                    }
                    else if(arr2[counter2]==arr1[counter1]){
                        finalarr[i]=arr2[counter2];
                        counter1++;counter2++;
                    }
                    i++;
        }

        while(len1>counter1){
            finalarr[i]=arr1[counter1];
            counter1++;
            i++;
        }

        while(len2>counter2){
            finalarr[i]=arr2[counter2];
            counter2++;
        i++;
        }

     for(int i=0;i<len1+len2 ;i++){
        cout<<finalarr[i]<<" ";
    } 
    cout<<endl;
}


void mergersort(int arr[],int n, int start, int end){

int mid =start+(end-start)/2;
if(start>=end){
    return ;
}


mergersort(arr,n,start,mid);
mergersort(arr,n,mid+1,end);

sortarr(arr,start,end);
}
 

 




int main(){
     int arr[12]={4,3,5,2,1,6,5,4,2,5,6,3};

     mergersort(arr,12,0,12);

  
}