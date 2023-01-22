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


node* reversell(node* &head,int k){
 if(head==NULL ){
    return NULL;
 }
    node* prev=NULL;
    node* cur=head;
    node* next=NULL;
    int x=0;
    while(x<k&&cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        x++;
    }    
    
    if(next!=NULL){
        head->next=reversell(next,k);
    }

    return prev;
   
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

    node* prev=reversell(node1, 2);

    cout<<"Reversed LL -> ";print(prev);



}