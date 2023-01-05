#include<iostream>
using namespace std;
/*int x=5;
bool checksort(int arr[],int n){
  x=x-1;  
if(x<=0){
    return true;
}

//x=x-1;
 
cout<<"x"<<x<<"     "<<"n"<<n<<endl;
if(arr[x]>arr[x-1]){ 
    cout<<arr[x]<<"  " <<arr[x-1]<<"      "<<true<<endl;   
checksort(arr,x);
return true;
}else{
    return false;
}

}*/

bool checksort(int arr[], int size){
    if(size==0||size==1){
        return true;
    }

    if(arr[0]>arr[1]){
return false;
    }else{
        bool check=checksort(arr+1,size-1);
        return check;
    }
}

int main(){
    int arr[5]={8,2,3,4,5};
   cout<< checksort(arr,5);
}