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
    cout<<"Enter data for left"<<root->data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for right"<<root->data<<endl;
    root->right=buildtree(root->right);
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

int height_of_tree(node* root){
    if(root==NULL){
        return 0;
    }

    int left=height_of_tree(root->left);
    int right=height_of_tree(root->right);

    return max(left,right)+1;
}

int diameter(node* root){
    if(root==NULL){
        return 0;
    }

    int left=diameter(root->left);
    int right=diameter(root->right);
    int both=height_of_tree(root->left)+height_of_tree(root->right);

    return max(left, max(right,both))+1;
}

pair<int,int> fastdiameter(node* root){

    if(root==NULL){
        pair<int, int> p=make_pair(0,0);
        return p;
    }

    pair<int,int>left=fastdiameter(root->left);
    pair<int,int>right=fastdiameter(root->right);

    int op1=left.first;
    int op2=right.first;

    int op3=left.second+right.second;

    pair<int,int> ans;
    ans.first= max(op1, max(op2,op3))+1;
    ans.second= max(op1,op2)+1;

    return ans;
}


int  main(){
    node* root=NULL;
    root=buildtree(root);
    levelorder_traversal(root);
    cout<<"height ------> "<<height_of_tree(root)<<endl;
    cout<<"Diameter -----> "<<diameter(root);

    cout<<"Fast Diameter -----> "<<fastdiameter(root).first;
}