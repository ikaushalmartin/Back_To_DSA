#include<iostream>
using namespace std;

int counting(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    return counting(n-1); //tail recursion
}

int main(){
    int n;
    cin>>n;
    counting(n);
}