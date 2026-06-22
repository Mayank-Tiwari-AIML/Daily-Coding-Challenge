#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string duplicate (string s){
        s.append(s);
        return s;
    }
    string remove (string s){
        if(s.empty()) return "";
        s.pop_back();
        return s;
    }
    string reverse(string s){
        std::reverse(s.begin(),s.end());
        return s;
    }

    string processStr(string s) {
        string ans;
        for(char c:s){
            if(c=='*') ans=remove(ans);
            else if(c=='#') ans=duplicate(ans);
            else if(c=='%') ans=reverse(ans);
            else ans.push_back(c);
        }
    return ans;}
};