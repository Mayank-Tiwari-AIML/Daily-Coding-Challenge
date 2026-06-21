#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int first(long long  num){
        while(num>=10){
            num/=10;
        }
        return num;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n=nums.size();
        vector<long long> prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                long long sum=prefix[j+1]-prefix[i];
                if(sum%10==x && first(sum)==x){
                    ans++;
                }
            }
        }
       return ans; 
    }
};