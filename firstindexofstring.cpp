#include<iostream>
using namespace std;

int main(){
    string a="hello";
    string b="l";
int ans=-1;
    for(int i=0;i<a.size();i++){

        if(a[i]==b[0]){
            int flag=0;
            int index=1;

            while(index!=b.size()){

                if(a[index+i]==b[index]&&(index+i)<a.size()){
index++;
                }else{
                        flag=1;
                        break;

                }
            }
            if(flag==0){
                ans=i;
                cout<<ans;
            return i;
        }
        }

        
    }

    cout<<ans;
}