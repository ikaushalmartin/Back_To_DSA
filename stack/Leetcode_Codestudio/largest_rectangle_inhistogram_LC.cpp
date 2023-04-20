class Solution {

    vector<int> smallestnextelement(vector<int> arr, int n){
           vector<int> ans(n);

        stack<int> st;
        st.push(-1);

        for(int i=n-1;i>=0;i--){
            while(st.top()!=-1 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }

        return ans;
        }

    vector<int> smallestprevelement(vector<int>heights, int n){
        vector<int> ans(n);

        stack<int> st;
        st.push(-1);

        for(int i=0;i<n;i++){
            while(st.top()!=-1 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }

        return ans;
        
            }    

public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int area=INT_MIN;

        vector<int> next(n);
        next=smallestnextelement(heights,n);

        vector<int> prev(n);
        prev=smallestprevelement(heights,n);

        for(int i=0;i<n;i++){
            int l=heights[i];
             if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int newarea=l*b;

           
            area=max(area,newarea);
        }

        return area;
    }
};