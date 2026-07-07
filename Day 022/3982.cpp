#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int range(int n){
        int mx=0;
        int mn=9;
        while(n>0){
            int d=n%10;
            mx=max(mx,d);
            mn=min(mn,d);
            n/=10;
        }
        return mx-mn;
    }
    int maxDigitRange(vector<int>& nums) {
        int maxrange=0;
        for(int i:nums){
            maxrange=max(maxrange,range(i));
        }
        int ans=0;
        for(int i:nums){
            if(range(i)==maxrange) ans+=i;
        }
    return ans;}
};