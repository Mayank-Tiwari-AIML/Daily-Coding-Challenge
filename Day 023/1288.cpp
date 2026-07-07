#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> covered(n, 0);
        int ans = n;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                if (intervals[i][0] <= intervals[j][0] &&
                    intervals[i][1] >= intervals[j][1] && !covered[j]) {
                    covered[j] = 1;
                    ans--;
                }
            }
        }

        return ans;
    }
};