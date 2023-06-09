#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main(){
  queue<int> q;

  q.push(4);
  q.push(3);
  q.push(1);
  q.push(10);
  q.push(2);

  stack<int> s;

  while (!q.empty())
  {
    s.push(q.front());
    q.pop();
  }

   while (!s.empty())
  {
    q.push(s.top());
    s.pop();
  }
 int size = q.size();
  for(int i=0;i<size;i++){
    cout<<q.front()<<" ";
    q.pop();
  }


     



}