#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void printNTimes(string name,int N){
    
    if(N < 1){
        return;
    }
    
    cout<<name<<endl;

    printNTimes(name,N-1);

}

void print1ToN(int N){

    if(N < 1) return;

    print1ToN(N-1);

    cout<<N<<endl;


}


void printNTo1(int N){

    if(N < 1) return;

    cout<<N<<endl;

    printNTo1(N-1);



}


int main(){
    
    //Print name N times
    printNTimes("Abhishek",5);

    //Print 1 to N
    print1ToN(5);

    //Print N to 1
    printNTo1(5);

    
}



