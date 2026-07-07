#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        int a=nums[0];
        for(int i=k;i<n;i++){
            a=max(a,nums[i-k]);
            ans=max(ans,a+nums[i]);
        }
        return ans;
    }
};