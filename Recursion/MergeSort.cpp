#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Time complexity n * logn


void merge(int a[],int low,int mid,int high){

    int i=low,j=mid+1;
    int k = 0;
    int temp[low+high]; 
    // vector<int> temp;

    while(i<=mid && j<=high){
        if(a[i] >= a[j]){
            temp[k] = a[j];
            k++;
            // temp.push_back(a[j]);
            j++;
        }else{
            temp[k] = a[i];
            // temp.push_back(a[i]);
            i++;
            k++;
        }
    }

    while(i<=mid){
        temp[k] = a[i];
        k++;
        // temp.push_back(a[i]);
        i++;
    }

    while(j<=high){
        temp[k] = a[j];
        // temp.push_back(a[j]);
        j++;

        k++;
    }

    for(int i=low;i<=high;i++){
        a[i] = temp[i-low];
    }

}


void mergeSort(int a[],int low,int high){

    if(low >= high) return;

    int mid = (low + high)/2;

    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);


}



int main(){

    int a[7] = {0,4,8,1,3,8,9};

    mergeSort(a,0,6);

    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}