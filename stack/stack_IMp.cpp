#include<iostream>
using namespace std;

class stack{
int *arr;    
int size;
int top;

stack(int size){
    this->size=size;
    arr=new int(size);
    top=-1;
}

void push(int ele){
    if(top<size-1){
        top++;
        arr[top]=ele;
    }else{
        cout<<"stack_overflow";
    }
}

void pop(){
    
}

};


int main(){}