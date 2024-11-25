#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a[6] = {10,5,2,7,1,9};
    int longestSubArr = 0;
    for(int i=0;i<6;i++){
       int sum = 0;
       for(int j=i;j<6;j++){
        for(int k=i;k<=j;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
        sum += a[j];
        if(sum == 15){
            longestSubArr = max(longestSubArr,j-1+1);
        }
       }
    }
    cout<<longestSubArr;
}