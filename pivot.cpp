class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = n*(n+1)/2;
        int sum1 = 0;
        int sum2 = totalSum;
        
        for(int i=1;i<=n;i++){

            cout<<sum1<<"     "<<sum2<<endl;
            sum2 -= i;
            if(sum1 == sum2){
                return i;
            }        
            sum1 += i;
        }
        return -1;
    }
};
