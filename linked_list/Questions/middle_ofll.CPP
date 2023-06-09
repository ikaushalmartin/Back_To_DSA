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

 void return_mid(node*&head){
    node*temp=head;
    int count=0,newcount=0;
    while(temp!=NULL){
            temp=temp->next;
            count++;
        }
       
       if(count%2==0){
            newcount=count/2;
           
        } else{
            newcount=count/2;
           
        }
        temp=head;
            int x;
        while(x!=newcount){
            temp=temp->next;
            x++;
        }
        head=temp;
 }

void approc_2(node*&head){
    node* fast=head;
    node* slow=head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    head=slow;
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

     return_mid(node1);

    cout<<"app1 -> ";print(node1);
    approc_2(node1);
     cout<<"app2 -> ";print(node1);

}