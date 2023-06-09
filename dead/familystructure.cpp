
string gendercheck(int n, long long k){
    if(n==1||k==1){
        return "Male";
    }
    long long par=(k+1)/2;
    string ans=gendercheck(n-1,par);
    
    if(k==2*par-1){
        return ans;
    }
    else{
        if(ans=="Female"){
            return "Male";
        }
        return "Female";
    }
}

string kthChildNthGeneration(int n, long long int k)
{
   
    return gendercheck(n,k);
    
}