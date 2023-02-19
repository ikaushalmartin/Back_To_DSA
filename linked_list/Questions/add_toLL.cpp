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

void reversell(node* &head){

    if(head==NULL || head->next==NULL){
        return;  
    }
    node* prev=NULL;
    node* cur=head;
    node* next=cur->next;

    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }

    head=prev;
    
}

void insert_at_tail(node* &head,node* &tail, int data){
    node* newnode=new node(data);
    
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;

        }else{
tail->next=newnode;
tail=newnode;
        }
     
}

void insert_at_head(node* head, int data){
    node* newnode=new node(data);


}

node* addition_of_numbers(node* &head1, node* &head2){
        node* temp1=head1;
        node* temp2=head2;
        node* anshead=NULL;
        node* anstail=NULL;
        int carry=0;
        int num;
        while(temp1!=NULL && temp2!=NULL){
                int sum=carry+temp1->data+temp2->data;
                if(sum>9){
                    carry=1;
                    num=sum%10;
                }else{
                    carry=0;
                    num=sum;
                }
                insert_at_tail(anshead,anstail, num);
                temp1=temp1->next;
                temp2=temp2->next;
               
        }

        while(temp1!=NULL){
            int sum=carry+temp1->data;
            if(sum>9){
                carry=1;
                num=sum%10;
            }else{
                carry=0;
                num=sum;
            }
             insert_at_tail(anshead,anstail, num);
             temp1=temp1->next;
        }
        while(temp2!=NULL){
             int sum=carry+temp2->data;
            if(sum>9){
                carry=1;
                num=sum%10;
            }else{
                carry=0;
                num=sum;
            }
             insert_at_tail(anshead,anstail, num);
             temp2=temp2->next;
        }

        while(carry!=0){
              int sum=carry;
               if(sum>9){
                carry=1;
                num=sum%10;
            }else{
                carry=0;
                num=sum;
            }
            insert_at_tail(anshead,anstail,1);
        }
        return anshead;

}

int main(){

node* head1=new node(9);
node* node2=new node(9);
node* node3=new node(9);
head1->next=node2;
node2->next=node3;


node* head2=new node(9);
node* node4=new node(9);
node* node5=new node(9);
node* node6=new node(9);
head2->next=node4;
node4->next=node5;
node5->next=node6;
print_ll(head1);
print_ll(head2);
reversell(head1);
reversell(head2);

//print_ll(head1);
//print_ll(head2);


node* ans=addition_of_numbers(head1,head2);


reversell(ans);
print_ll(ans);

}