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

void inorderTraversal(node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main(){
node* q=new node(10);
q->left=new node(20);
q->right=new node(30);
node* p=q->left;
node* r=q->right;
p->left=new node(40);
p->right=new node(50);
r->left=new node(60);
r->right=new node(70);

p->left->left=NULL;
p->left->right=NULL;

p->right->left=NULL;
p->right->right=NULL;


r->left->left=NULL;
r->left->right=NULL;

r->right->left=NULL;
r->right->right=NULL;
inorderTraversal(q);
}