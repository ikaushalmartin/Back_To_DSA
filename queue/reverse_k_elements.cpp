#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<int> q;
    stack<int> s;
    int k=3;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    int n=q.size()-k;

    for(int i=0;i<n;i++){
        q.push(q.front());
        q.pop();
    }


while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();

}
}
