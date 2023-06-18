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
        numerals.insert({"L", 50});
        numerals.insert({"C", 100});
        numerals.insert({"D", 500});
        numerals.insert({"M", 1000});
    }
};
