#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void insert_at_tail(node* &head, int data){

node* newtail=new node(data);
node* temp=head;

while(temp->next!=NULL){
    temp=temp->next;
}

temp->next=newtail;
newtail->prev=temp;
}


void print(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}




int main(){

node* node1=new node(10);
node* node2=new node(20);

node1->next=node2;
node2->prev=node1;

insert_at_tail(node1, 30);
insert_at_tail(node1, 40);
print(node1); 


}