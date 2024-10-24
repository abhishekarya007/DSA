#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Disjoint{
    vector<int> rank,parent,size;
    public:
    Disjoint(int n){
        rank.resize(n+1,0);
        size.resize(n+1,1);//initiall size will be 1
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i] = i;//node will be its own parent
        }
    }
    
    int findParent(int u){
        if(parent[u] == u) return u;
        return parent[u] = findParent(parent[parent[u]]);//will do path compression when backtrack
    }

    void unionByRank(int u,int v){
        int uPu = findParent(u);
        int uPv = findParent(v);
        if(uPu == uPv) return;
        
        if(rank[uPu] < rank[uPv]){
            parent[uPu] = uPv;
        }else if(rank[uPu] > rank[uPv]){
            parent[uPv] = uPu;
        }else{
            parent[uPv] = uPu;
            rank[uPu]++;
        }
    }

    void unionBySize(int u,int v){
        int uPu = findParent(u);
        int uPv = findParent(v);

        if(uPu == uPv) return;

        if(size[uPu] < size[uPv]){
            parent[uPu] = uPv;
            size[uPv] = size[uPv] + size[uPu];
        }else{
            parent[uPv] = uPu;
            size[uPu] = size[uPv] + size[uPu];
        }
    } 

};

int main(){
    Disjoint ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    ds.findParent(7)==ds.findParent(3) ? cout<<"Same\n" : cout<<"Not Same\n";

    ds.unionBySize(3,7);
    ds.findParent(7)==ds.findParent(3) ? cout<<"Same\n" : cout<<"Not Same\n";

    return 0;
}