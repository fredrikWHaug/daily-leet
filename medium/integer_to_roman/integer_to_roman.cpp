#import <iostream>
#import <map>

class Solution {
public:
    string intToRoman(int num) {
        
        std::string number_string = std::to_string(num);
        int number_length = number_string.length();
        int number_array[number_length];

        for (int i = 0; i < number_length; i ++) {
            char number_char = number_string[i];
            int number = static_cast<int>(number_char);
            number_array[i] = number;
        }

        for (int i = 0; i < number_length; i ++) {
            std::cout << number_array[i] << std:: endl;
        }

        // for (char digit : number_string) {
        //     digit_chars.push_back(digit);
        //     std::cout << digit << std::endl;
        // }
        // for (char digit : digit_chars) {
        //     digit = static_cast<int>(digit);
        //     digit = digit - '0';
        // }

        // for (int digit : digit_chars) {
        //     std::cout << digit << std::endl;
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