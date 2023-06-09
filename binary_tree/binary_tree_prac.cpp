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

node* build_tree(node* root){
    cout<<"Enter data"<<endl;
    int data;
    cin>>data;

    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Left for"<<root->data;
    root->left=build_tree(root->left);
    cout<<"Right for"<<root->data;
    root->right=build_tree(root->right);

    return root;
}

void levelorder_traversal(node* root){
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

int main(){
    node* root=NULL;
    root=build_tree(root);

    levelorder_traversal(root);

}