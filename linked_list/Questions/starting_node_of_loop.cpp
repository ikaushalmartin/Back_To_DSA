#include<iostream>
#include<map>
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

void detect_loop(node* &head){
    node* slow=head;
    node* fast=head;
   
    while(fast!=NULL && slow!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            slow=head;
            break;
        }

    }
 //cout<<slow->data<<"   "<<fast->data;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }

    cout<<slow->data<<" ";


    
    



}

 

void print_linked_list(node* &head){
   node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* node1=new node(10);
    node* node2=new node(20);
    node* node3=new node(40);
    node* node4=new node(50);
    node* node5=new node(60);

    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=node2;

  // print_linked_list(node1);
 

 detect_loop(node1);

 
}