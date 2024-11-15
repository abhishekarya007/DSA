#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Heap is complete binart tree. Which comes up with a heap order priority
//Max Heap and Min Heap
//Max heap parent node is always greater than child node
//Min heap parent node is always smaller than child node

//CBT is a BT whose each level is fully filled ,last lvl can or can't be
//nodes are always added from the left
//parent = index/2
//left child = 2 * index
//right child = 2 * index + 1

class Heap{

    public:
    int a[100];
    int size;

    Heap(){
        size = 0;
        a[0] = -1;
    }

    // TC -> O(logn)
    void insert(int n){
        size++;
        a[size] = n;
        int index = size;

        while(parentInx > 0){

            int parentInx = index/2;

            if(a[index] > a[parentInx]){
                swap(a[size],a[parentInx]);
                index = parentInx;
            }else{
                return;
            }
        }
    }

    void print(){
        for(int i=0;i<=size;i++){
            cout<<a[i]<<" ";
        }
    }


};




int main(){

    Heap h;
    h.insert(10);
    h.insert(8);
    h.insert(7);
    h.insert(20);
    h.print();

}