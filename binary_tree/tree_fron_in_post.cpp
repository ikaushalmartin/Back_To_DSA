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

int find_pos(vector<int> inorder, int ele){
    for(int i=0;i<inorder.size();i++){
        if(inorder[i]==ele){
            return i;
        }
    }

    return -1;
}


node* solve(vector<int> inorder, vector<int> postorder, int &index, int start, int end){  

    if(index<0||start>end){
        return NULL;
    }


    int root_element=postorder[index--];
    node* root=new node(root_element);

    int inorder_position=find_pos(inorder, root_element);

    root->right=solve(inorder,postorder,index,inorder_position+1,end);
    root->left=solve(inorder,postorder,index,start,inorder_position-1);
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
vector<int> postorder={9,15,7,20,3};
int index=inorder.size()-1;
node* root=solve(inorder,postorder,index,0,inorder.size()-1);

print(root);



}

