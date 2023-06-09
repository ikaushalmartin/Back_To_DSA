#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next=NULL;

    node(int data){
        this->data=data;
    }
};





void insert_at_head(node* &head, int data){
node* newhead=new node(data);
newhead->next=head;
head=newhead;
}


void insert_at_tail(node* &tail, int data){
    node* newtail=new node(data);
    tail->next=newtail;
   tail=newtail;

}



void print_linkedlist(node* &head){
node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}}


int main(){

node *head=new node(10);
node *tail=new node(20);

head->next=tail; 
insert_at_head(head,20);
insert_at_tail(tail,30);
insert_at_tail(tail,40);   
print_linkedlist(head);



}