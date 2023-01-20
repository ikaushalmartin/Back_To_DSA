#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }

    ~node(){
        int val=this->data;
        if(next!=NULL){
                delete next;
                next=NULL;

        }

        cout<<"destructor"<<endl;
    }
};

void delete_element(node* &head, int place){
    node* temp=head;
    int count=1;
    if(place==1){

            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            

            delete temp;
    }
    
    while(count!=place-1){
        temp=temp->next;
        count++;
    }
    
    
    temp->next=temp->next->next;
    temp->next->next->prev=temp;
   temp->next->next=NULL;
    temp->next->prev=NULL;

    delete temp->next->next;




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

      node* node1=new node(10);
    node* node2=new node(20);
    node* node3=new node(30);
    node* node4=new node(40);
    node* node5=new node(50);


    node1->next=node2;
    node2->prev=node1;

    node2->next=node3;
    node3->prev=node2;

    node3->next=node4;
    node4->prev=node3;

    node4->next=node5;
    node5->prev=node4;

    delete_element(node1,3);
    print(node1);

}