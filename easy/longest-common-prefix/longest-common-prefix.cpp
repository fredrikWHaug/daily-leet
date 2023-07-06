#include <string>
#include <iostream>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string longest_prefix = "";
        for (int i = 0; i < strs.size(); i ++) {
            char prefix = strs[0][i];
            std::cout << prefix << std::endl;
            for (int j = 0; j < strs.size(); j ++) {
                std::cout << strs[j][j] << std::endl;
                if (strs[1+i][j] != prefix) {
                    return "";
                } else {
                    longest_prefix += prefix;
                }
            }
        }
    return longest_prefix;
    }
};