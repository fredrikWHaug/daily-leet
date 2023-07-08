#include <string>
#include <iostream>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        std::string prefix = strs[0];

        for (int i = 0; i < strs.size(); i ++) {
            int j = 0;
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                j ++;
            }
            prefix = prefix.substr(0, j);
        }
        if (prefix.empty()) {
            return "";
        } else {
            return prefix;
        }
    }
};