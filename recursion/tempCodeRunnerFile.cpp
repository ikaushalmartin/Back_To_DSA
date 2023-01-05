#include<iostream>
#include <array>
using namespace std;



/*

void mergersort(int arr[],int n, int start, int end){

int mid =start+(end-start)/2;
if(start>=end){
    return ;
}


mergersort(arr,n,start,mid);
mergersort(arr,n,mid+1,end);

cout<<arr[start]<<" ";

}
*/

 


void sortarr( array<int,4> arr1, array<int,2> arr2){
    const int n=arr1.size()+arr2.size();
    int counter1=0,counter2=0;
    int i=0;
    array<int,n>finalarr;

        while(i<n+1){
             cout<<"counter1 ->"<<arr1[counter1]<<" "<<"counter2 ->"<<arr2[counter2]<<" "<<"i"<<i<<endl;
                    if(arr1[counter1]<arr2[counter2]){
                        finalarr[i]=arr1[counter1];
                        counter1++;
                    }else if(arr2[counter2]<arr1[counter1]){
                        finalarr[i]=arr2[counter2];
                        counter2++;
                    }
                    else if(arr2[counter2]==arr1[counter1]){
                        finalarr[i]=arr2[counter2];
                        counter1++;counter2++;
                    }
                    else if(counter1>arr1.size()){
                        cout<<"loop1"<<endl;
                        for(int x=i;i<n;i++){
                            
                            finalarr[x]= arr2[x];
                        }
                        return;
                    }
                    else if(counter2>arr2.size()){
                        cout<<"loop2"<<endl;
                         for(int x=i;i<n;i++){
                             
                            finalarr[x]= arr1[x];
                        }
                        return;
                    }

                    i++;

                   



        }

  /*  for(int i=0;i<n;i++){
        cout<<finalarr[i]<<" ";
    }*/
}


int main(){
   // int arr[6]={4,3,5,2,1,6};

  //  mergersort(arr,6,0,6);

  array<int,4> arr1{2,3,4,5};
  array<int,2> arr2{1,6};

    sortarr(arr1, arr2);
}