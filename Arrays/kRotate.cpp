#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    int n = a.size();

    if(n == 1){
        return a;
    }

    int trueRt = k % n;

    for(int i = 0; i<trueRT; i++) {
        int s = n-2;
        int e = n-1;

        while(e > 0){
            swap(a[s], a[e]);
            s--;
            e--;
        }
    }

    return a;
}