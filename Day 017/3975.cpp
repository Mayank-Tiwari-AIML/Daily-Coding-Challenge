#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(),occupiedIntervals.end());
        vector<vector<int>> merged;
        for(auto i: occupiedIntervals){
            if(merged.empty() ||(long long) i[0]>(long long) merged.back()[1]+1) merged.push_back(i);
            else merged.back()[1]=max(merged.back()[1],i[1]);
        }
     vector<vector<int>> ans;
    for(auto v:merged){
        long long l=v[0];
        long long r=v[1];
        if(r<freeStart || l>freeEnd){
            ans.push_back({(int)l,(int)r});
            continue;
        }
        if(l<freeStart){
            ans.push_back({(int)l,freeStart-1});
        }
        if(r>freeEnd){
            ans.push_back({freeEnd+1,(int)r});
        }
    }
    return ans;}
};