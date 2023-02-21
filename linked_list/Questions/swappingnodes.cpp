#include<iostream>
#include<vector>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int data){
        this->data=data;
        next=NULL;
    }
};
void print_ll(ListNode* &head){
    ListNode* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<endl;
}
 

ListNode* reverse(ListNode* &head){
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    

    return prev;


   

} 


ListNode* merge(ListNode* head, int k){

        if(head==NULL || head->next==NULL || k==0){
            return head;
        }

        ListNode* temp=head;
        ListNode* firstaddr=NULL;
        ListNode* secondaddr=NULL;
        int length=0;
        while(temp!=NULL){
            length++;
            if(secondaddr!=NULL){
                secondaddr=secondaddr->next;
            }
            if(length==k){
                firstaddr=temp;
                secondaddr=head;

            }
            temp=temp->next;
        }

        int tempdata=firstaddr->data;
        firstaddr->data=secondaddr->data;
        secondaddr->data=tempdata;

      return head; 
    }
 
 


int main(){

ListNode* head1=new ListNode(1);
ListNode* node2=new ListNode(4);
ListNode* node3=new ListNode(5);
ListNode* node4=new ListNode(0);
ListNode* node5=new ListNode(6);
ListNode* node6=new ListNode(0);
 
 head1->next=node2;
 node2->next=node3;
 node3->next=node4;
 node4->next=node5;
 node5->next=node6;


//print_ll(head1);

ListNode* x=merge(head1,2);

print_ll(x);

}