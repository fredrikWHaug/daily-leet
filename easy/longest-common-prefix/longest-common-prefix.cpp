#include <string>
#include <iostream>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char first_letter = strs[0][0];
        for (int i = 0; i < strs.size(); i ++) {
            if (strs[i][0] != first_letter) {
                return "";
            }
        }
        std::string longest_prefix = "";
        for (int i = 0; i < strs.size(); i ++) {
            char prefix = strs[0][i];
            for (int j = 0; j < strs.size(); j ++) {
                if (strs[i][j] == prefix) {
                    longest_prefix += prefix;
                }
            }
        }
    return longest_prefix;
    }
};