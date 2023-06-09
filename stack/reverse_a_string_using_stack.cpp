#include<iostream>
#include<stack>
using namespace std;

int main(){
string a="abcdefgh";

stack<char> st;

for(int i=0;i<8;i++){
    st.push(a[i]);
}
a="";
for(int i=0;i<8;i++){
    a=a+st.top();
    st.pop();
}

cout<<a;


}