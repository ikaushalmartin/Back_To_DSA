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

node* insert_data(node* root, int data){
    if(root==NULL){
       root=new node(data);
       return root;
    }

    if(data>root->data){
            root->right=insert_data(root->right,data);
    }
    else{
        root->left-insert_data(root->left,data);
    }

    return root;
}

void take_input(node* &root){
    cout<<"Enter Data"<<endl;
    int data;
    cin>>data;

    while(data!=-1){
        root=insert_data(root,data);
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
    take_input(root);
    inorder(root);
    
}