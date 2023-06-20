#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(string s) {

        int result = 0;

        // exceptions
        std::string four = "IV";
        std::string nine = "IX";
        std::string forty = "XL";
        std::string ninety = "XC";
        std::string four_h = "CD";
        std::string nine_h = "CM";

        if (s == four) {
            return 4;
        } else if (s == nine) {
            return 9;
        } else if (s == forty) {
            return 40;
        } else if (s == ninety) {
            return 90;
        } else if (s == four_h) {
            return 400;
        } else if (s == nine_h) {
            return 900;
        }

        for(int i = 0; i < s.size(); i ++) {
            if (s[i] == 'I') {
                result ++;
            } else if (s[i] == 'V') {
                result += 5;
            } else if (s[i] == 'X') {
                result += 10;
            } else if (s[i] == 'L') {
                result += 50;
            } else if (s[i] == 'C') {
                result += 100;
            } else if (s[i] == 'D') {
                result += 500;
            } else {
                result += 1000;
            }
            }
            return result;
        }

    };

/*
Pseudo:
1. Create a hash map of all the 
romans and corresponding values
2. split up the insput string into 
characters
3. iterate over the splitte input and 
increment the output value by comparing
the symbol to the key:value in the hashmap
4. take the special cases into account by 
conditional statements