#include<iostream>
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

node* create_node(node* root, int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(root->data<data){
        root->right=create_node(root->right,data);
    }else{
        root->left=create_node(root->left,data);
    }

    return root;
}


void insert(node* &root){
cout<<"enter data"<<endl;
int data;
cin>>data;

while(data!=-1){
root=create_node(root,data);
cin>>data;
}

}

node* min_BST(node* root){
    node* temp=root;

    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp;
    
}



node* max_BST(node* root){
    node* temp=root;

    while(temp->right!=NULL){
        temp=temp->right;
    }

    return temp;
    
}


void inorder(node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root= NULL;
    insert(root);

inorder(root);
  cout<<endl;
  node* temp=min_BST(root);

  cout<<"Min - "<<temp->data;
    cout<<endl;

    temp=max_BST(root);
    cout<<"Max - "<<temp->data;

    
}