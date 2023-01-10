 

#include <bits/stdc++.h>
using namespace std;


 

class Solution{
    private:
    
    bool issafe(int x, int y,int n, vector<vector<int>> &m,vector<vector<int>> visited){
        
        if((x>=0 && x<n) &&(y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
            return true;
        }
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, string output,  vector<vector<int>> visited,int x, int y){
        
      if(x==n-1&&y==n-1){
          ans.push_back(output);
          return;
      }
      
      visited[x][y]=1;
      
      //down
        int newx=x+1;
        int newy=y;
          if(issafe(newx,newy,n,m,visited)){
              output.push_back('D');
              solve(m,n,ans,output,visited,newx,newy);
              output.pop_back();
          } 
          
        //up      
         newx=x-1;
         newy=y;
          if(issafe(newx,newy,n,m,visited)){
              output.push_back('U');
              solve(m,n,ans,output,visited,newx,newy);
              output.pop_back();
          }  
        
        //left      
         newx=x;
         newy=y-1;
          if(issafe(newx,newy,n,m,visited)){
              output.push_back('L');
              solve(m,n,ans,output,visited,newx,newy);
              output.pop_back();
          }  
        
        //right  
         newx=x;
         newy=y+1;
          if(issafe(newx,newy,n,m,visited)){
              output.push_back('R');
              solve(m,n,ans,output,visited,newx,newy);
              output.pop_back();
          }  
          
          visited[x][y]=1;
          }
       
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
         vector<string> ans;
         string output="";
         if(m[0][0]==0){
             return ans;
         }
         
         vector<vector<int>> visited=m;
         
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 visited[i][j]=0;
             }
         }
         int x=0;
         int y=0;
         
         solve(m,n,ans,output,visited,x,y);
         sort(ans.begin(),ans.end());
         
         return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}