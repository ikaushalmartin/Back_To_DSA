#include<iostream>
using namespace std;

 
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void x(int n){
if(n==0){
    return ;
}
//cout<<n<<endl;

int p=n%10;
//cout<<"% -> "<<n%10<<" ";

  x(n/10);
cout<<arr[p]<<" ";
}

int main(){
int n;    
cin>>n;


x(n);
}