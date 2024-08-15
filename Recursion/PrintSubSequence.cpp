#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printSubSequence(int ind, int a[], vector<int> &temp, int N)
{

    if (ind == N)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            cout << temp[i];
        }
        if (temp.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }

    temp.push_back(a[ind]);
    printSubSequence(ind + 1, a, temp, N);

    temp.pop_back();
    printSubSequence(ind + 1, a, temp, N);
}


//We use bool if we want to stop the recursion after getting one output / when we hit our base case once in multiple recursion case


bool subSequenceWithSum(int ind, int a[], vector<int> &temp, int N, int targetSum, int sum)
{

    if (ind == N)
    {
        if (targetSum == sum)
        {
            for (int i = 0; i < temp.size(); i++)
            {
                cout << temp[i] << " ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    temp.push_back(a[ind]);
    sum = sum + a[ind];
    bool considering = subSequenceWithSum(ind + 1, a, temp, N, targetSum, sum);
    if(considering) return true;

    temp.pop_back();
    sum = sum - a[ind];
    bool notConsidering = subSequenceWithSum(ind + 1, a, temp, N, targetSum, sum);
    if(notConsidering) return true;
}


int countNoOfSubSequence(int ind,int N){

    if(ind == N) return 1;

    int left = countNoOfSubSequence(ind+1,N);
    int right = countNoOfSubSequence(ind+1,N);


    return left + right;


}



// Time complexity 2^n * n because for every index we have 2 choices and to print every subsequence
// Space complexity O(n) as max depth of recursion will be n

int main()
{

    int N = 2;
    int a[2] = {3, 2};
    vector<int> temp;

    // printSubSequence(0,a,temp,N);
    // bool ans = subSequenceWithSum(0, a, temp, N, 3, 0);
    cout<<countNoOfSubSequence(0,N);

    return 0;
}