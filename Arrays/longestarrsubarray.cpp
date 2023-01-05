#include<iostream>
using namespace std;

int main(){
    int arr[7]={10, 7, 4, 6, 8, 10, 11};
    int counter,start,end,prevcounter;
    for(int i=0;i<5;i++){
        if(arr[i+1]-arr[i]==arr[i+2]-arr[i+1]){
            cout<<"Diff - "<<(arr[i+2]-arr[i+1])<<endl;
            counter+=1;
            prevcounter=counter;
        }else{
            cout<<"prevcounter "<<prevcounter<<endl;
            if(prevcounter<counter){
            prevcounter=counter;
        }
            counter=0;
        }

        
    }
    prevcounter=prevcounter+1;
    int i=prevcounter-1;
    int x=prevcounter+2;
    if(prevcounter-1<=0){
        i=0;
        
    }
    if(x>=5){
        x=5;
    }
for(i;i<=x;i++){
    cout<<arr[i]<<" ";
}
    
}