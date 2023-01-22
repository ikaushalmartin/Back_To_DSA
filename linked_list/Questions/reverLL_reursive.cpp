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


void reversell(node* &head,node*prev, node* cur, node* next){

    if(cur==NULL){
        head=prev;  
        return;
    }
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    reversell(head,prev,cur,next);
    
    
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
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;

    cout<<"Normal LL -> ";print(node1);

    reversell(node1, NULL,node1,node1->next);

    cout<<"Reversed LL -> ";print(node1);



}