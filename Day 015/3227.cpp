#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool doesAliceWin(string s) {
        int count=0;
        for(int j:s){
            if(j=='a' || j=='e'|| j=='i'|| j=='o'|| j=='u'){
                count++;
            }
        }
        if(count ==0) return false;
        if(count/2!=0 ) return true;
    return true;}
};