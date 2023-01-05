#include<iostream>
using namespace std;

int main(){
    int num=60;
    cout<<&num<<endl;  //&address pointer

    int *ptr=&num;  
    cout<<ptr<<endl; //address of num

    cout<<*ptr<<endl; //value of num

    int a=5;
    int *p2=&a;
    *p2++;
    cout<<p2<<endl; //address of num

    cout<<a2<<endl; //value of num
}