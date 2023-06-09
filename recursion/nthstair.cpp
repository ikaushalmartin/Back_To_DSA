#include<iostream>
using namespace std;


int stair(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    return stair(n-1)+stair(n-2);
}

int main(){
int n;
cin>>n;

cout<<stair(n);
}