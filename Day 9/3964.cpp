#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minLights(vector<int>& lights) {
        int n=lights.size();
        vector<int> dif (n+1,0);
        for(int i=0;i<n;i++){
            if(lights[i]>0){
                int l=max(0,i-lights[i]);
                int r=min(n-1,i+lights[i]);
                dif[l]++;
                dif[r+1]--;
            }
        }
        vector<int> illum(n,0);
        int curr =0;
        for(int i=0;i<n;i++){
            curr+=dif[i];
            illum[i]=(curr>0);
        }
        int ans=0;
        int end=-1;
        for(int i=0;i<n;i++){
            if(!illum[i] && i>end){
                int center=min(i+1,n-1);
                ans++;
                end=min(n-1,center+1);
            }
        }
    return ans;}
};