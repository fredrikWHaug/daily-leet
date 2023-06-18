#include <map>
#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::unordered_map<std::string, int> numerals;

    int romanToInt(string s) {
        numerals.insert({"I", 1});
        numerals.insert({"V", 5});
        numerals.insert({"X", 10});
    }
};
