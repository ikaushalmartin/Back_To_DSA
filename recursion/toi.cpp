 

void toi(int n,int src, int helper, int destination,vector<vector<int>> &ans,vector<int>output){
    
    if(n==1){
         output.push_back(src);
     output.push_back(destination);
    ans.push_back(output);
        output.clear();
        return;
    }
    
    toi(n-1,src,destination,helper,ans,output);
    output.push_back(src);
     output.push_back(destination);
    ans.push_back(output);
    output.clear();
    toi(n-1,helper,src,destination,ans,output);
}

vector<vector<int>> towerOfHanoi(int n){ 
    
   vector<vector<int>> ans;
    vector<int>output;
    
    toi(n,1,2,3,ans,output);
    return ans;
 
}