class Solution {
public:
    void backtrack(int n, int k, int index, string& curr, int currCost, vector<string>& ans) {
        if (currCost > k) return;

        if (index == n) {
            ans.push_back(curr);
            return;
        }

        curr.push_back('0');
        backtrack(n, k, index + 1, curr, currCost, ans);
        curr.pop_back(); 

        if (curr.empty() || curr.back() != '1') {
            curr.push_back('1');
            backtrack(n, k, index + 1, curr, currCost + index, ans);
            curr.pop_back(); 
        }
    }
    
    vector<string> generateValidStrings(int n, int k) {
        vector<string> ans;
        string curr = "";
        
        backtrack(n, k, 0, curr, 0, ans);
        
        return ans;
    }
};