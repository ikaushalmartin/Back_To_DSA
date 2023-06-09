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

node* ratate(node* &head, int k){
    node* temp=head;
    if(head==NULL){
        return head;
    }
    int length=0;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
     k=k%length;
        if(k==0){
            return head;
        }
        temp=head;

        for(int i=0;i<length-k-1;i++){
            temp=temp->next;
        }

        node* dummy=temp->next;
        temp->next=NULL;
        temp=dummy;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
       return dummy;

}


int main(){

node* head1=new node(1);
node* node2=new node(4);
node* node3=new node(5);
node* node4=new node(5);
node* node5=new node(6);
node* node6=new node(5);
 
 head1->next=node2;
 node2->next=node3;
 node3->next=node4;
 node4->next=node5;
 node5->next=node6;


print_ll(head1);

node* x=ratate(head1,5);

print_ll(x);

}