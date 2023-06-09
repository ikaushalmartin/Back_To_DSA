#include<iostream>

using namespace std;

class node{
     public:
    int data;
    node* next;
   
    node(int data){
        this->data=data;
        next=NULL;
    }
};

class stack{
    public:
node* top=NULL;

void push(int data){
    node* newnode=new node(data);

    if(!newnode){
        cout<<"overflow";
        exit(1);
    }

    newnode->next=top;
    top=newnode;
}

void pop(){
    if(top==NULL){
        cout<<"Stack Underflow"<<endl;
        return;

    }
    node* temp=top;
    top=top->next;
    delete temp;
}

int peak(){
    if(top==NULL){
            cout<<"Stack undeflow"<<endl;
            return -1;
    }
    return top->data;
}

bool isempty(){
    return top==NULL;
}


};

int main(){
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.peak();
    st.pop();
    cout<<st.peak();
}

 
 