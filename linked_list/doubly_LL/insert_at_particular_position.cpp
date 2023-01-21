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

void insertathead(node* &head, int data){

    
    if(head==NULL){
        node* temp=new node(data);
        head=temp;
    }
    else{
            node* newhead=new node(data);
            newhead->next=head;
            head->prev=newhead;
             head=newhead;
    }


    
}

void insert_element_in_middle(node* &head, int data, int place){
    int count=1;
    node* newaddition=new node(data);
    node* temp=head;


    if(place==1){
        insertathead(head,data);
        return;
    }


    while(count!=place-1){
        temp=temp->next;
        count++;
    }
    newaddition->next=temp->next;
    newaddition->prev=temp;
    temp->next=newaddition;
    temp->next->prev=newaddition;

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
    node* node3=new node(30);
    node* node4=new node(40);
    node* node5=new node(50);


    node1->next=node2;
    node2->prev=node1;

    node2->next=node3;
    node3->prev=node2;

    node3->next=node4;
    node4->prev=node3;

    node4->next=node5;
    node5->prev=node4;


    print(node1);
    cout<<endl;

    insert_element_in_middle(node1, 500,1);
    print(node1);
}