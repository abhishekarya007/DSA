#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string deciToBin(int n){
    string binary = "";
    int count = 0;

    while(n!= 1){
        if(n % 2 == 0){
            binary.append("0");
        }else{  
            count++;
            binary.append("1");
        }
        n = n/2;
    }
    if(n == 1){
        count++;
        binary.append("1");
    }
    cout<<count<<endl;
    reverse(binary.begin(),binary.end());
    return binary;
}

int main(){
    cout<<deciToBin(15);
}