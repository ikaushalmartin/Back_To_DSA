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
 

int calculatesum(vector<int> arr){
     int sum=0;
    for(int i=0;i<arr.size();i++){
        
        sum=sum+arr[i];
    }
    return sum;
}


ListNode* merge(ListNode* head){
     if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        ListNode* ans=new ListNode(-1);
        ListNode* anstemp=ans;

        vector<int> arr;
        
        while(temp!=NULL){
         if(temp->data==0){
                
                int x=calculatesum(arr);
                arr.clear();
                
                ListNode* ansnode=new ListNode(x);
                anstemp->next=ansnode;
                anstemp=ansnode;
                  x=0;
                
            }else{
                 arr.push_back(temp->data);
            }
            temp=temp->next;
        } 
         if (!arr.empty()) {
            int x = calculatesum(arr);
            ListNode* ansnode = new ListNode(x);
            anstemp->next = ansnode;
            anstemp = ansnode;
        }
        return ans->next->next;
    }
 


int main(){

ListNode* head1=new ListNode(0);
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

ListNode* x=merge(head1);

print_ll(x);

}