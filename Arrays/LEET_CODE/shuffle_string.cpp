class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        string ans[n];
        string ansstr="";
        for(int i=0;i<n;i++){
            ans[indices[i]]=s[i];
        }

        for(int i=0;i<n;i++){
            ansstr=ansstr+ans[i];
        }

        return ansstr;
    }
};