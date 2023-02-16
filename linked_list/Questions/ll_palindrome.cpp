/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

    ListNode* getmid(ListNode* &head){

    ListNode* temp=head;
    
    ListNode* slow=temp;
    ListNode* fast=temp->next;

    while(fast!=NULL&& fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            }
    return slow;

}


ListNode* reverse_ll(ListNode* &head){
ListNode* temp=head;

ListNode* prev=NULL;
ListNode* cur=temp;
ListNode* next=NULL;


while(cur!=NULL){
     
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
}
 
return prev;

}




public:
    bool isPalindrome(ListNode* head) {
     


    if(head->next==NULL){
        return true;
    }

ListNode* middle=getmid(head);

ListNode* temp=middle->next;
middle->next=reverse_ll(temp);


ListNode* head1=head;
ListNode* head2=middle ->next;

while (head2 != NULL) {

  if (head1->val != head2->val) {
  return false;
  }
  head1=head1->next;
  head2=head2->next;
}

return true;
        
    }
};