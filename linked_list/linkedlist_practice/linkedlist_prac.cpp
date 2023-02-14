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

void insert_at_head(node* &head, int data){
    node* newhead=new node(data);
    if(head==NULL){
        head=newhead;
        return;
    }
    newhead->next=head;
    head=newhead;
}

void insert_at_tail(node* &head,  int data){
    node* newtail=new node(data);
    node* temp=head;
    if(head==NULL){
        head=newtail;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newtail;
}

void insert_in_middle(node* &head, int data, int position){
    if(position==1){
        insert_at_head(head,data);
        return;
    }
        int counter=1;
        node* temp=head;
    while (counter!=position-1)
    {
        temp=temp->next;
        counter++;
    }
    if(temp->next==NULL){
        insert_at_tail(head,data);
        return;
    }
    node* newnode=new node(data);

     newnode->next=temp->next;
     temp->next=newnode;

}

void print_ll(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<endl;
}


int main(){

node* head=new node(10);
node* node2=new node(20);
node* node3=new node(30);
node* node4=new node(40);

head->next=node2;
node2->next=node3;
node3->next=node4;

print_ll(head);

insert_at_head(head,0);
print_ll(head);
insert_at_tail(head,50);
print_ll(head);

insert_in_middle(head,100,7);
print_ll(head);
}