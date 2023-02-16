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
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Destructor"<<endl;
    }
};

void delete_node(node* &head, int node_to_delete){
node* temp=head;
int counter=1;
if(node_to_delete==1){
    node* deletemem =head;
    temp=temp->next;
    head=temp;
    deletemem->next=NULL;
    delete deletemem;
    return;
}
else{
    while(counter!=(node_to_delete-1)){
    temp=temp->next;
    counter++;
}
node* deletemem2=temp->next; 
temp->next=temp->next->next;
 deletemem2->next=NULL;
delete deletemem2;
}
}



void print_linked_list(node* &head){
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
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;

    print_linked_list(node1);
    delete_node(node1,1);
    //delete_node(node1,4);
     print_linked_list(node1);
}