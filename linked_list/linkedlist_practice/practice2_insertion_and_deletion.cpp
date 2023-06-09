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



void insert_element_at_head(node* &head,int data){
    node* newhead=new node(data);
    newhead->next=head;
    head=newhead;
}
void insert_element_at_tail(node* &tail, int data){

    node* newtail=new node(data);
    if(tail==NULL){
        insert_element_at_head(tail,data);
    }
    tail->next=newtail;
    tail=newtail;
    


    
}


void add_element_in_middle(node* &head, int data, int place){

    if(place ==1){
        insert_element_at_head(head,data);
        return;
    }

    node* newnode=new node(data);
    node* temp=head;
    int counter=1;
    while(counter!=place-1){
        temp=temp->next;
        counter++;
    }

    if(temp->next=NULL){
        insert_element_at_tail(temp,data);
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}


void print(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
cout<<endl;
}


int main(){

node* node1=NULL;
node* tail=node1;
 insert_element_at_tail(tail,20);
 insert_element_at_tail(tail,30);
 insert_element_at_tail(tail,40);
 

print(node1);
add_element_in_middle(node1,2000,1);

print(node1);
 


}