#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Sum of first N numbers using Parameterised and Functional Recursion

void SumUsingPara(int N,int sum){

    if(N < 1){

        cout<<sum<<endl;
        return;  
    } 

    SumUsingPara(N-1,N+sum);

}

int SumUsingFuct(int N){

    if(N == 1) return N;

    return N + SumUsingFuct(N-1);


}


int main(){
    
    SumUsingPara(5,0);

    cout<<SumUsingFuct(6);

    
}