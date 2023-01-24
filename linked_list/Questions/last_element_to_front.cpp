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

        ~node(){
            if(this->next!=NULL){
                delete next;
            this->next=NULL;
            }
            cout<<"destructor"<<endl;
        }

};
 
void insert_at_head(node* &head, int data){
    node* newhead=new node(data);
    if(head==NULL){
        head=newhead;
    }
    else{
            newhead->next=head;
            head=newhead;
    }
} 


void move_element(node* &head){

    if(head->next==NULL){
        return;
    }
    node* temp=head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    insert_at_head(head,temp->next->data);
    
     delete temp->next;
     temp->next=NULL;
   

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

    node1->next=node2;
    node2->next=node3;
    node3->next=node4;


    move_element(node1);
   print_linked_list(node1);

    
 

}