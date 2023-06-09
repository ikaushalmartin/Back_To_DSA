class Solution {
public:
    int minAddToMakeValid(string s) {
         stack<char> st;

         for(int i=0;i<s.size();i++){
             if(s[i]=='('){
                 st.push(s[i]);
             }else{
                 if(!st.empty() && st.top()=='('){
                     st.pop();

                 }else{
                     st.push(s[i]);
                 }
             }
         }

         
         int open=0,close=0;

      while(!st.empty()){
            if(st.top()=='('){
                open++;
            }else if(st.top()==')'){
                close++;
            }

            st.pop();
        }

return open +close;
        
    }
};