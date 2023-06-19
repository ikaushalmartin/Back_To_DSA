#include<iostream>
#include<vector>
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

int find_pos(vector<int>inorder, int curr_ele){
    for(int i=0;i<inorder.size();i++){
        if(inorder[i]==curr_ele){
            return i;
        }
    }
    return -1;
}

node* solve(vector<int> inorder, vector<int> preorder, int &index, int start, int end){
if(index>=inorder.size() || start>end){
    return NULL;
}

int curr_ele=preorder[index++];
node* root=new node(curr_ele);

int pos=find_pos(inorder, curr_ele);

root->left=solve(inorder,preorder,index,start,pos-1);
root->right=solve(inorder,preorder,index,pos+1,end);

return root;

}

void print(node* root){
    if(root==NULL){
        return;
    }
 cout<<root->data<<" ";
    print(root->left);
    print(root->right);
   
}


int main(){

vector<int> inorder={ 9,3,15,20,7};
vector<int> preorder={3,9,20,15,7};
int index=0;
node* root=solve(inorder,preorder,index,0,inorder.size());

print(root);



}