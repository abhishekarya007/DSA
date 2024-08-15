#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int fibonacciNumber(int N){

    if(N == 0) return 0;
    if(N == 1) return 1;

    return fibonacciNumber(N-1) + fibonacciNumber(N-2);

}

//Time complexity - 2^n approx as for every n we are calling 2 recursion


int main(){

    cout<<fibonacciNumber(6);

    return 0;
}