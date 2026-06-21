#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(string moves) {
        int x=0 , y=0 , k=0;
        for(char c:moves){
            if(c=='R') x++;
            if(c=='L') x--;
            if(c=='U') y++;
            if(c=='D') y--;
            if(c=='_') k++;
        }
        int ans=abs(x)+abs(y)+k;
        return ans;
    }
};