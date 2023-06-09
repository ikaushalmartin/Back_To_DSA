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

void sort012s(node* &head){
node* temp=head;
int zero=0,one=0,two=0;

while(temp!=NULL){
    if(temp->data==0){
        zero++;
    }
    else if(temp->data==1){
        one++;
    }else{
        two++;
    }
    temp=temp->next;
}
cout<<zero<<" "<<one<<" "<<two<<endl;
temp=head;
while(temp!=NULL){

if(zero!=0){
    temp->data=0;
    zero--;
}else if(one!=0){
    temp->data=1;
    one--;
}else{
    temp->data=2;
    
    two--;
}
temp=temp->next;
}

}

void print_ll(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<endl;
}


int main(){
node* head=new node(1);
node* node2=new node(0);
node* node3=new node(2);
node* node4=new node(1);

head->next=node2;
node2->next=node3;
node3->next=node4;

print_ll(head);
sort012s(head);
print_ll(head);
}