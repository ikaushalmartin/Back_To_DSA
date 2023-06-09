#include <bits/stdc++.h>

void add_in_sorted_order(stack<int> &s, int num) {
  if (s.empty() || s.top() < num) {
  s.push(num);
  return;
  }

  int x=s.top();
  s.pop();
  add_in_sorted_order(s,num);
  s.push(x);
}
stack<int> sortStack(stack<int> &s)
{
  if (s.empty()) {
  return s;
  }
  int num=s.top();
  s.pop();

  sortStack(s);

  add_in_sorted_order(s,num);
return s;
}