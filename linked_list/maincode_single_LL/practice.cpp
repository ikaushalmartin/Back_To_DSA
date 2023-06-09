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

void add_element_athead(node* &head,int data){
    node* newhead=new node(data);
    newhead->next=head;
    head=newhead;
}

void add_element_tail(node* tail, int data){
    node* newtail=new node(data);
    tail->next=newtail;
    tail=newtail;
}



void print_element(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    node* head=new node(10);
    node* tail=new node(14);
    head->next=tail;
   add_element_tail(tail,20);
   add_element_athead(head,200);

    print_element(head);
}