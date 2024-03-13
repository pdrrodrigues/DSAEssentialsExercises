#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    int n = arr.size();
    pair<int, int> answer;
    answer.first = arr[0];
    answer.second = arr[1];

    for(int i=0; i<n-1; i++){
        int temp = arr[i];

        int tempAnswerLB = arr[i+1];
        int s = i+1;
        int e = n-1;

        while(s <= e){
            int mid = (s+e)/2;
            if (arr[mid] > (x-temp)){
                e = mid-1;
            } else {
                tempAnswerLB = arr[mid];
                s = mid+1;
            }
        }

        int tempAnswerUB = arr[i+1];
        s = i+1;
        e = n-1;

        while(s <= e){
            int mid = (s+e)/2;
            if (arr[mid] > (x-temp)){
                tempAnswerUB = arr[mid];
                s = mid+1;
            } else {
                e = mid-1;
            }
        }

        int diff = abs(x - answer.first - answer.second);
        int diffLB = abs(x - temp - tempAnswerLB);
        int diffUB = abs(x - temp - tempAnswerUB);

        if (diff > diffLB && diffUB > diffLB){
            answer.first = temp;
            answer.second = tempAnswerLB;
        } else if (diff > diffUB && diffLB > diffUB){
            answer.first = temp;
            answer.second = tempAnswerUB;
        }
    }

    return answer;
}