class Solution {
public:
    long long maxSum(vector<int>& nums, int k) {
        int n=nums.size();
        long long ans=LLONG_MIN;
        for(int i=0;i<n;i++){
            vector<int> in;
            long long sum=0;
            for(int j=i;j<n;j++){
                in.push_back(nums[j]);
                sum+=nums[j];
                vector<int> out;
                for(int k=0;k<i;k++){
                    out.push_back(nums[k]);
                }
                for(int k=j+1;k<n;k++){
                    out.push_back(nums[k]);
                }
                sort(in.begin(),in.end());
                sort(out.begin(),out.end(),greater<int>());
                long long curr=sum;
                int swaps=min({k,(int)in.size(),(int)out.size()});
                for(int i=0;i<swaps;i++){
                    if(out[i]>in[i]){
                        curr+=(out[i]-in[i]);
                    }
                    else break;
                }
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};