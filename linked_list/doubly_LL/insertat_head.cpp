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


void insert_element_at_head(node* &head, int data){
        node* newhead=new node(data);
        node* temp=head;

        newhead->next=head;
        head->prev=newhead;
        head=newhead;
        
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


//cout<<node2->prev->data;
//cout<<node1->next->data;


insert_element_at_head(node1,30);

print(node1);
cout<<endl;
cout<<node1->next->data<<endl;
cout<<node2->prev->prev->data;
}