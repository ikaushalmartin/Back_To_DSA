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

void circular_ll(node* &head, int element, int data){
   
   
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        newnode->next=newnode; 
    }

    else{   
            node* newnode=new node(data);
            node* temp=head;      
            while(temp->data!=element){
                    temp=temp->next;
            }

            newnode->next=temp->next;
            temp->next=newnode;
             

    }

}

bool check_circularity(node* head){

    node* temp=head;

    if(head==NULL){
        return NULL;
    }

    while(temp->next!=NULL && temp->data!=head->data){
        temp=temp->next;
        
    }
    if(temp->next==NULL){
        return false;
    }else{
        return true;
    }


}


bool check_circularity_using_map(node* &head){
    if(head==NULL){
        return false;
    }  node* temp=head;
            bool arr[60]={0};

            while (temp!=NULL)
            {  
                 
                if(arr[temp->data]==1){
                    return true;
                }
                arr[temp->data]=1;

                temp=temp->next;
            }
//cout<<arr[10]<<" "<<arr[20]<<" "<<arr[30]<<" "<<arr[40]<<" "<<arr[50]<<" ";
            return false;
 

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
     circular_ll(tail,0,10); 
   circular_ll(tail,10,20); 
   circular_ll(tail,20,30); 
    circular_ll(tail,30,40);
   circular_ll(tail,40,50);

    print(tail);
cout<<tail->data<<endl;

 cout<<check_circularity(tail)<<endl;
  cout<<check_circularity_using_map(tail)   ;
}