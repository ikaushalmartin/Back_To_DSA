#include<iostream>
using namespace std;

class stack{

int *arr;
int size;
int top1;
int top2;
public:
stack(int size){
    this->size=size;
    arr=new int[size];
    top1 =-2;
    top2=-1;
}

void push1(int element){
    if(top1<size-2 || top2<size-2){
        top1++;
        top1++;
        arr[top1]=element;
    }else{
        cout<<"Stack Overflow";
    }
}

void push2(int element){
    if(top1<size-2 || top2<size-2){
        top2++;
        top2++;
        arr[top2]=element;
    }else{
        cout<<"Stack Overflow";
    }
}

void pop1(){
    if(top1>=0){
        top1--;
        top1--;
    }else{
        cout<<"Stack Underflow";
    }
}

void pop2(){
    if(top2>=0){
        top2--;
        top2--;
    }else{
        cout<<"Stack Underflow";
    }
}

int peak1(){
    if(top1>=0){
        return arr[top1];
    }else{
        cout<<"Stack is empty";
    }
}


int peak2(){
    if(top2>=0){
        return arr[top2];
    }else{
        cout<<"Stack is empty";
    }
}

bool empty1(){
    if(top1==-1){
        return true;
    }
    else{
        false;
    }
}

bool empty2(){
    if(top2==-1){
        return true;
    }
    else{
        false;
    }
}
};

int main(){
 stack s(5);
 s.push1(10);
 s.push2(100);
 s.push1(20);
 s.push2(200);
 s.push1(30);
 
  
 
 cout<<s.peak1();
 cout<<s.peak2();
 
 


}