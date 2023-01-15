#include<iostream>
using namespace std;

string ans="";
static int p;
void sol(string x,char element,int n,int index){

if(index>=n-1){
    return;
}
    cout<<p<<endl;
    if(x[index]!=element){
        ans.push_back(x[index]);
    }else{
        p++;
    }
    sol(x,element,n,index+1);

   
 
}

int main(){
    string x="aaaaabxaaaaa";
    sol(x,'x',8,0);
     for(int i=0;i<p;i++){
        ans.push_back('x');
    }
   cout<<ans;
}