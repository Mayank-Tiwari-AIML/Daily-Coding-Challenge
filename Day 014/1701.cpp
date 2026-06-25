#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        long long time=customers[0][0];
        long long wait=0;
        for(int i=0;i<n;i++){
            time = max(time,(long long)customers[i][0]);
            time+=customers[i][1];
            wait+=time-customers[i][0];
        }

    return 1.0*wait/n ;}
};