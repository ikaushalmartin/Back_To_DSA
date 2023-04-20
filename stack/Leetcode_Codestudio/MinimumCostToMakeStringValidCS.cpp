#include <bits/stdc++.h> 
int findMinimumCost(string str) {

  if (str.length() % 2 == 1) {
  return -1;
  }

  stack<char> st;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '{') {
    st.push(str[i]);
    } else {
      if (!st.empty() && st.top() == '{') {
      st.pop();
      } else {
      st.push(str[i]);
      }
    }
  }

  int open=0,close=0;

  while (!st.empty()) {
    if (st.top() == '{') {
    open++;
    } else  {
    close++;
    }

    st.pop();
  }

  int ans=(open+1)/2+(close+1)/2;
  return ans ;
}