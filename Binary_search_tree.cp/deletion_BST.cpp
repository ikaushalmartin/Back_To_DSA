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
 
void inorder(node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int minval(node* root){
    node* temp=root;

    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp->data;
}
node* delete_node(node* &root, int val){
    if(root==NULL){
        return NULL;
    }

    if(root->data==val){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        if(root->left==NULL &&root->right!=NULL){
            node* temp=root->right;
            delete root;
            return temp;

        }

        if(root->right==NULL && root->left!=NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }

        if(root->right!=NULL && root->left!=NULL){
            int min=minval(root->right);       //min of right || max of left
            root->data=min;
            root->right=delete_node(root->right,min);
            return root;
        }

    }

      if(root->data<val){
        root->right=delete_node(root->right,val);
    }else{
        root->left=delete_node(root->left,val);
    }
    return root;
}

int main(){
    node* root= NULL;
    insert(root);

inorder(root);
cout<<endl;
 node* delroot= delete_node(root, 50);
 inorder(delroot);
 
}