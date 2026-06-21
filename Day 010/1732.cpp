#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> prefixsum(n + 1, 0);
        for(int i=0;i<n;i++){
            prefixsum[i + 1] = prefixsum[i] + gain[i];
        }
        int ans=0;
        for(int i=0;i<prefixsum.size();i++){
            ans=max(ans,prefixsum[i]);
        }
    return ans;}
};