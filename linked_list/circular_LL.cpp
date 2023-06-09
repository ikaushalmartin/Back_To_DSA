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
            next=NULL;
        }
    }
};

void insert_element(node* &tail, int element, int data){
    
    if(tail==NULL){
        node* newnode=new node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        node* newnode=new node(data);
        node* temp=tail;
        while(temp->data!=element){
            temp=temp->next;
        }
            newnode->next=temp->next;
            temp->next=newnode;
    }
}

void delete_node(node* &tail, int element){
    node* temp=tail;

    if(tail==NULL){
        cout<<"empty"<<endl;
        return;
    }

    while(temp->next->data!=element){
        
        temp=temp->next;
    }
 
        
        node* nweadd=temp->next;
        temp->next=temp->next->next;

        if(temp->next==temp){
             
            tail=NULL;
             return;
        }

        if(temp==temp->next->next){
tail=temp->next->next;
        }
        
        
        nweadd->next=NULL; 

        delete nweadd;
 
}

void print(node* &tail){
    node* temp=tail;
     if(tail==NULL){
        cout<<"Oops!Empty";
        return;
     }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
        cout<<endl;
    
}
int main(){
    node* tail=NULL;
    insert_element(tail,0,10);
    print(tail);
   // insert_element(tail,10,20);
   // print(tail);
    //insert_element(tail,20,30);
    //print(tail);
    //insert_element(tail,10,300);
    //print(tail);

   // delete_node(tail,10);
    //print(tail);

}