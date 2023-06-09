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

void delete_node(node* &head, int val){
    node* prev=NULL;
    node* temp=head;

    while(temp!=NULL){

        if(temp->data==val){
            if(prev==NULL){
                head=temp->next;
                delete temp;
                temp=head;
            }else{
                prev->next=temp->next;
                delete temp;
                temp=prev->next;
            }
        }else{
            prev=temp;
            temp=temp->next;
        }
    }

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

delete_node(head1,5);

print_ll(head1);

}