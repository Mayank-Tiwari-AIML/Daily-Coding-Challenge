#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase = 0;

        for (int i = 0; i < word.size(); i++) {
            if (isupper(word[i])) {
                uppercase++;
            }
        }

        return uppercase == word.size() ||
               uppercase == 0 ||
               (uppercase == 1 && isupper(word[0]));
    }
};