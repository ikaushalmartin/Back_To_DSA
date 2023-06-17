#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
 cout<<"Enter data"<<endl;
 int data;
 cin>>data;
 root=new node(data);

 if(data==-1){
    return NULL;
 }

 cout<<"LEft of "<<root->data<<endl;
 root->left=buildtree(root->left);
 cout<<"Right of "<<root->data<<endl;
 root->right=buildtree(root->right);
 return root;
}

void level_order_traversal(node* root){
queue<node*> q;

q.push(root);
q.push(NULL);

while(!q.empty()){
    
    node* temp=q.front();
  
    q.pop();

    if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }else{
          cout<<temp->data<<" ";
        if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }

    }

    
}

}

void longest_distance_sum(node* root, int length, int &maxlength, int sum, int &maxsum){

if(root==NULL){
    if(length>maxlength){
        maxlength=length;
        maxsum=sum;
    }

    if(length==maxlength){
        maxsum=max(maxsum,sum);
    }

    return;
}

sum+=root->data;
longest_distance_sum(root->left,length+1,maxlength,sum,maxsum);
longest_distance_sum(root->right,length+1,maxlength,sum,maxsum);

}


int main(){

    node* root=NULL;
   root= buildtree(root);

    level_order_traversal(root);

    int length=0;
    int maxlength=INT16_MIN;

    int sum=0;
    int maxsum=0;

    longest_distance_sum(root,length,maxlength,sum,maxsum);

    cout<<maxsum;
}