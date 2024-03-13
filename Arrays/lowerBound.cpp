#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val){
    if(Val < A[0]){
        return -1;
    }

    int lowerBound = A[0];

    for(int x: A){
        if (x <= Val){
            lowerBound = x;
        }
    }

    return lowerBound;
}