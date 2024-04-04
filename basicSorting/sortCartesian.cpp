#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int n = v.size();
    
    for(int i=0; i<n-1; ++i){
        bool swapped = false;

        for(int j=0; j<(n-i-1); ++j){
            if(v[j].first > v[j+1].first){
                swap(v[j],v[j+1]);
                swapped = true;
            } else if(v[j].first == v[j+1].first && v[j].second > v[j+1].second){
                swap(v[j],v[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }

    return v;
}