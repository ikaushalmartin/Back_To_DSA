#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

 
void dup(int nums1[],int nums2[], int x,int y){
        vector<int> ans={-121};  
        int i=0,j=0,a=0;
       
        while(i<x&&j<y){
            if(nums1[i]==nums2[j]){
                if(ans[a]!=nums1[i]){
                     ans[a]=nums1[i];
               i++;
               j++;
                    a++;
                }
                i++;j++;
              
            }
            else if(nums2[j]>nums1[i]){
                i++;
                
            }
            else{
                j++;
            }
        }
        for(int i=0;i<a;i++){
cout<<ans[i]<<" ";
        }
  
}

int main(){
    int nums1[]={1,2};
    int nums2[]={2,1};
   dup(nums1,nums2,2,2);
    
}