#import <iostream>
#import <map>

class Solution {
public:
    string intToRoman(int num) {

        std::string number_string = std::to_string(num);

        std::vector<char> digit_chars;

        for (char digit : number_string) {
            digit_chars.push_back(digit);
        }

        // for (std::string digit : digit_chars) {
        //     int digit = digit -'0';
        // }

        // std::map<int, std::string> int_numeral_map;

        // int_numeral_map[1] = "I";
        // int_numeral_map[5] = "V";
        // int_numeral_map[10] = "X";
        // int_numeral_map[50] = "L";
        // int_numeral_map[100] = "C";
        // int_numeral_map[500] = "D";
        // int_numeral_map[1000] = "M";

        // std::vector<std::string> roman_numerals;
        // for (int i = 0; i < digits.size(); i ++) {
        //     if (digits[i] <= 5) {
        //         roman_numerals.push_back(digits[i]*int_numeral_app[1]);
        //     }
        // }

        return "69";
    }
};