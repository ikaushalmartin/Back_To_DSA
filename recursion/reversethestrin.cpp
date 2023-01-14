#include<iostream>
using namespace std;

void reverse(string s, int end){

if(end<0){
    return;
}

cout<<s[end]<<" ";
reverse(s,end-1);


}

int main(){

    string s="abcdef";
    int end=6;
    reverse(s,end-1);
}