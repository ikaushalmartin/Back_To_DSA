#include<iostream>
#include<queue>

using namespace std;


int main(){
    queue<int> q;

    q.push(10);
     q.push(10);
      q.push(10);
       q.push(10);
        q.push(10);

        cout<<q.size()<<endl;

        q.pop();
        cout<<q.size();


}