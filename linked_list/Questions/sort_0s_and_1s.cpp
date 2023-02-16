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

void print_ll(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<endl;
}

void insert_data(node* &ll, int data){
    node* newnode= new node(data);
    node *temp=ll;
    if(ll==NULL){
        ll=newnode;
        return;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void create_separate_ll(node* &head){
    node* first=NULL;
    node* second=NULL;
    node* zero=NULL;

    node* temp=head;

    while(temp!=NULL){
        //cout<<temp->data<<endl;
        if(temp->data==1){
            insert_data(first,1);
        }else if(temp->data==2){
            insert_data(second,2);
        }else if(temp->data==0){
            insert_data(zero,0);
        }
        temp=temp->next;
    }
print_ll(first);
print_ll(second);
print_ll(zero);
temp=head;
while(temp!=NULL){
    if(zero!=NULL){
        temp->data=0;
        zero=zero->next;
    }else if(first!=NULL){
        temp->data=1;
        first=first->next;
    }else if(second!=NULL){
        temp->data=2;
        second=second->next;
    }
    temp=temp->next;
}}




int main(){

node* head=new node(1);
node* node2=new node(0);
node* node3=new node(1);
node* node4=new node(2);

head->next=node2;
node2->next=node3;
node3->next=node4;

print_ll(head);

 
create_separate_ll(head);
print_ll(head);

}