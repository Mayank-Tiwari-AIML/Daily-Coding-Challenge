#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int low=-1;
        int high=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(low==-1) {
                    low=i;
                }
                high=i;
            }
        }
        if(low==-1){
            return {-1,-1};
        }
        ans.push_back(low);
        ans.push_back(high);
        return ans;
    }
};