#include<iostream>
using namespace std;
int counter=0;
int sum=0;
int prevsum;
int fibbo(int p,int y, int n){
if(counter==0){
cout<<0<<endl;    
}
if(counter==n){
    return sum;
}
prevsum=sum;
sum=p+y;
cout<<sum<<endl;
counter++;
fibbo(sum,prevsum,n);
}

int main(){
    int n;
cin>>n;

fibbo(0,1,n);
}