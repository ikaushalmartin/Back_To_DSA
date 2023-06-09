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
    node* final_list=new node(-1);
    node* temp1=head1;
    node* temp2=head2;
    node* temp3=final_list;

    while(temp1!=NULL && temp2!=NULL){
 
         if(temp1->data<temp2->data){
            temp3->next=temp1;
           // cout<<"t1<t2  "<<temp1->data<<endl;
            temp1=temp1->next;
        }else{  
                temp3->next=temp2;
              //  cout<<"t2<t1  "<<temp2->data<<endl;
                temp2=temp2->next;
        }

        temp3=temp3->next;
       
    }

    while(temp1!=NULL){
         temp3->next=temp1;
          cout<<"t1<t2  "<<temp1->data<<endl;
            temp1=temp1->next;
             temp3=temp3->next;
    }

    while(temp2!=NULL){
        temp3->next=temp2;
         cout<<"t2<t1  "<<temp2->data<<endl;
                temp2=temp2->next;
                 temp3=temp3->next;
    }
     
    print_ll(final_list->next);

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
