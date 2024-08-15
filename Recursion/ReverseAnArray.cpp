#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void reverseArray(int i,int j,int a[]){

    if(i>j || i==j) return;

    swap(a[i],a[j]);

    reverseArray(i+1,j-1,a);

}

void reverseArraySinglePointer(int i,int a[],int n){

    if(i>=n/2) return;

    swap(a[i],a[n-i-1]);

    reverseArraySinglePointer(i+1,a,n);

}


int main(){

    int n = 5;
    int a[5] = {1,2,3,4,5};

    reverseArray(0,n-1,a);
    reverseArraySinglePointer(0,a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}