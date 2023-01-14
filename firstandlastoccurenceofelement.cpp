#include<iostream>
#include <vector>
using namespace std;


static int first =-1;
  


void findelement(vector<int>&output, string a, char find,int start, int end){



    if(start>=end){
        return ;
    }
    
    if(a[start]==find&&first==-1){
        output.push_back(start);
        
    }
    else if (a[start]==find)
    {
       output.push_back(end);
       return;

    }

    findelement(output,a,find,start+1,end);
     
    

}

int main(){
    string a="abaacdaefaah";
    char find='a';

    vector<int>output;

    findelement(output,a,find,0, a.size());

    cout<<output.front()<<endl;
    
    cout<<output[output.size()-1];
}