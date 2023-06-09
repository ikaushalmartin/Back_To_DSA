#include<iostream>
using namespace std;

int main(){
    int num=60;
   // cout<<&num<<endl;  //&address pointer
    int *ptr=&num;  
    cout<<"Address of ptr - "<<ptr<<endl; //address of num
    cout<<*ptr<<endl; //value of num



    int a=5;
    int *p2=&a;
   //*p2++;
    cout<<"Address of p2 - "<<p2<<endl; //address of num
    cout<<*p2+1<<endl; //value of num

// normal p is containing the address 
// *p is containing the value

p2=p2-1000;
cout<<*p2<<endl; //address incremented by 4 bytes

int arr[3]={1,2,3};

cout<<"array add -> "<<&arr[1]<<endl;


}