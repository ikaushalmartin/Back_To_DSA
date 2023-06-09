#include <bits/stdc++.h> 

void solve(string str, int index, vector<string> &ans,string output){
    
    if(index>=str.size()){
        if(output.length()>0){
            ans.push_back(output);
        }
    
    return;}
        
        solve(str,index+1,ans,output);
    
    char element=str[index];
        output.push_back(element);
        solve(str,index+1,ans,output);
        
    }
    
 


vector<string> subsequences(string str){
	
	 vector<string> ans;
    string output="";
     solve(str,0,ans,output);
    
    return ans;
	
}
