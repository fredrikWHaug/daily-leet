#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        bool result = true;
        std::string string_version = std::to_string(x);
        vector<std::string> string_list;
        for (char c : string_version) {
            string_list.push_back(std::string(1, c));
        }
        vector<std::string> copy = string_list;
        std::reverse(copy.begin(), copy.end());

        for (int i = 0; i < copy.size(); i ++) {
            if (copy[i] != string_list[i]) {
                result = false;
            }
        }
        return result;
    }
};