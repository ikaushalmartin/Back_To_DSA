#include<stack>
class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<int> arr;
        int counter=0;

        for(int i=0;i<s.size();i++){
             
            if(s[i]=='('){
                if(counter==0){
                    arr.push_back(i);
                }
                counter++;
            }else if(s[i]==')'){
                if(counter==1){
                    arr.push_back(i);
                }
                counter--;
            }
        }

            int size=0;
            string ans="";
        for(int i=0;i<s.size();i++){

            if(size<arr.size() && arr[size]==i){
                size++;
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};