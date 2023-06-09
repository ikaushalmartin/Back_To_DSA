#include<iostream>
#include <vector>
using namespace std;


//static int first =-1;
  

/*
void findelement(vector<int>&output, string a, char find,int start, int end){

    if(start>=end){
        return ;
    }  
    if(a[start]==find){
        output.push_back(start);
         
    }
    findelement(output,a,find,start+1,end);
}
*/

static int first=-1;
static int last=-1;
void findelement_second(string a, char b, int index){
    
    if(index==a.size()){
        return;
    }

    if(a[index]==b){
        if(first==-1){
            first=index;
        }
        else{
            last=index;
        }
    }

findelement_second(a,b,index+1);

}

int main(){
    string a="abaacdaefaah";
    char find='a';

    vector<int>output;
    findelement_second(a,find,0);
   // findelement(output,a,find,0, a.size());
   // cout<<output.front()<<endl;
   // cout<<output[output.size()-1];

   cout<<"first = "<<first<<"     "<<"last = "<<last<<endl;
}