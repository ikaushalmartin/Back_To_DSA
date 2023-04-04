#include<iostream>
using namespace std;

class stack{

int *arr;
int size;
int top;
public:
stack(int size){
    this->size=size;
    arr=new int[size];
    top =-1;
}

void push(int element){
    if(top<size-1){
        top++;
        arr[top]=element;
    }else{
        cout<<"Stack Overflow";
    }
}

void pop(){
    if(top>=0){
        top--;
    }else{
        cout<<"Stack Underflow";
    }
}

int peak(){
    if(top>=0){
        return arr[top];
    }else{
        cout<<"Stack is empty";
    }
}

bool empty(){
    if(top==-1){
        return true;
    }
    else{
        false;
    }
}
};

int main(){

stack s(4);

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);

cout<<s.peak();
s.pop();
cout<<s.peak();

}