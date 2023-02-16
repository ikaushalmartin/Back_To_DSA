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


void merge_ll(node* head1, node* head2){
   
   node* temp1=head1;
   node* temp2=head2;
    node* prev=temp1;
    node* curr=temp1->next;
   while(temp1!=NULL && temp2!=NULL){
     cout<<temp1->data<<"           "<<temp2->data<<endl;
    if(temp1->data<temp2->data<temp1->next->data){
         prev->next=temp2;
         

    }
   
       temp1=temp1->next;
        temp2=temp2->next;
   }

   print_ll(head1);

}

int main(){

node* head1=new node(1);
node* node2=new node(4);
node* node3=new node(5);
head1->next=node2;
node2->next=node3;


node* head2=new node(2);
node* node4=new node(3);
node* node5=new node(5);
head2->next=node4;
node4->next=node5;

print_ll(head1);
print_ll(head2);


merge_ll(head1,head2);

}
