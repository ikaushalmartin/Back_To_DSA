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


void insert_in_middle(node* &head,int data, int place){
    node* middle_node=new node(data);
    int counter=1;
    node* temp=head;
    while(counter!=place){
        temp=temp->next;
        counter++;
    }

   // node* temp_nextaddr=temp->next;
    middle_node->next=temp->next;
    temp->next=middle_node;
   


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

    print_linked_list(node1);

    insert_in_middle(node1,30,2);
     print_linked_list(node1);

}