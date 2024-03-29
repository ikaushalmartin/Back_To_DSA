#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
 	stack<int> st;
        for (int i = 0; i < n; i++) {
        st.push(i);
		}

                while (st.size() > 1) {
                int a=st.top();
				st.pop();

				int b=st.top();
				st.pop();
 				
				  if (knows(a, b)) {
                  st.push(b);
                  } else {
                     st.push(a);
					 }
                    }

					int rowcheck=0;
				 
					int candidate=st.top();
					st.pop();
                                        for (int i = 0; i < n; i++) {
                                          if (knows(candidate, i)) {
                                          return -1;
                                          }if(knows(i,candidate)) {
                                          rowcheck++;
										  }
                                            }

                                            if (rowcheck >= n - 1) {
                                            return candidate;
                                            } else {
                                            return -1;
											}
}