#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//Time complexity O(nlogn)


int partition(int a[],int low ,int high){

    int i = low;
    int j = high;
    int pivot = a[low];

    while(i<j){

        while(a[i] <= pivot && i<=high-1){
            i++;
        }

        while(a[j] > pivot && j>=low+1){
            j--;
        }

        if(i<j){

            swap(a[i],a[j]);
        }

    }

    swap(a[low],a[j]);

    return j;

}




void quickSort(int a[],int low,int high){

    if(low == high) return;

    int partitionIndex = partition(a,low,high);

    quickSort(a,low,partitionIndex-1);
    quickSort(a,partitionIndex+1,high);


}





int main(){

    int a[5] = {3,1,6,4,8};

    quickSort(a,0,4);

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}