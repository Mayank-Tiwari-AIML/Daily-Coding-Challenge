#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int i=0, j=0;
        int count=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else if(count==0){
                count=1;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
    return (i==s.size());}
};