#include <string>
#include <iostream>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool empty = false;
        std::string longest_prefix = "";
        for (int i = 0; i < strs.size(); i ++) {
            std::string prefix = strs[0][i];
            for (int j = 0; j < strs.size(); i ++) {
                // see if the first letter of the rest of the words match?
            }
        }


    }
};