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

node* root_insert(node* root, int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }

    if(data>root->data){
        root->right=root_insert(root->right,data);
    }else{
        root->left=root_insert(root->left,data);
    }

    return root;
}

void insert_data(node* &root){
    int data;
    cout<<"Enter Data Stream"<<endl;
    cin>>data;

    while(data!=-1){
        root=root_insert(root,data);
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

int main(){

    node* root=NULL;
    insert_data(root);

    inorder(root);
}