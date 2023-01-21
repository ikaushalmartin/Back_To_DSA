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
        prev= NULL;
    }

     ~node(){
       int val=this->data;
        if(next!=NULL){
                delete next;
                next=NULL;

        }

        cout<<"destructor"<<endl;
        return;
    }
};

void insert_at_tail(node* &head, int data){
    node* newtail= new node(data);
    node* temp=head;
    if(head==NULL){
        head=newtail;
        return;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newtail;
        newtail->prev=temp;
    }
}
void insertathead(node* &head, int data){

    
    if(head==NULL){
        node* temp=new node(data);
        head=temp;
    }
    else{
            node* newhead=new node(data);
            newhead->next=head;
            head->prev=newhead;
             head=newhead;
    }


    
}

void insert_element_in_middle(node* &head, int data, int place){
    int count=1;
    node* newaddition=new node(data);
    node* temp=head;


    if(place==1){
        insertathead(head,data);
        return;
    }
    else if(place ==6){
        insert_at_tail(head,data);
    }
    else{
         while(count!=place-1){
        temp=temp->next;
        count++;
    }
    newaddition->next=temp->next;
    newaddition->prev=temp;
    temp->next=newaddition;
    temp->next->prev=newaddition;

    }


   
}


void delete_element(node* &head, int place){
    node* temp=head;
    int count=1;
    if(place==1){

            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            delete temp;
    } 
    
    else{
         while(count!=place-1){
        temp=temp->next;
        count++;
    }
    node* deletemem2=temp->next; 
    deletemem2->prev=NULL;
    temp->next=temp->next->next;
    deletemem2->next=NULL;
     delete deletemem2;
    }
    
   

}




void print(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=NULL;
     insertathead(head,10);
     //insert_at_head(head,10);
     //insert_at_head(head,10);
    //insert_at_head(head,10);
    
    
    insert_at_tail(head,20);
    insert_at_tail(head,30);
    insert_at_tail(head,40);
    insert_at_tail(head,50);
     
    insert_element_in_middle(head,300,1);
    delete_element(head,6);
     
    print(head);


}