#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> arr) {
    bool allNeg = true;
    int largestSum = INT_MIN;

    for(int x: arr){
        if(x > 0){
            allNeg = false;
        }

        largestSum = max(largestSum, x);
    }

    if(allNeg){
        return largestSum;
    }

    int cs = 0; 
    largestSum = 0;
    
    for(int x: arr){
        cs += x;

        if(cs < 0){
            cs = 0;
        }

        largestSum = max(largestSum, cs);
    }

    return largestSum;
}