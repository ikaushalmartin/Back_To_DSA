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
    cout<<"Data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"left data"<<root->data<<endl;
    root->left=build_tree(root);
    cout<<"right data"<<root->data<<endl;
    root->right=build_tree(root);
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


int height_of_tree(node* root){
    if(root==NULL){
        return 0;
    }

    int left=height_of_tree(root->left);
    int right=height_of_tree(root->right);

    return max(left,right)+1;
}


int main(){
    node* root=NULL;
    root=build_tree(root);

    level_order_traversal(root);

    //cout<<height_of_tree(root);
}