#include<bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag){
    if(flag == false){
        sort(a.begin(), a.end(), greater<int>());
        return a;
    } else {
        sort(a.begin(), a.end(), less<int>());
        return a;
    }
}