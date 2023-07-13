#include <iostream>
#include <map>

class Solution {
public:
    string intToRoman(int num) {
        
        std::string number_string = std::to_string(num);

        int number_length = number_string.length();
        int number_array[number_length];

        for (int i = 0; i < number_length; i ++) {
            char number_char = number_string[i];
            int number = number_char - '0';
            number_array[i] = number;
        }

        std::map<int, char> int_numeral_map;

        int_numeral_map[1] = 'I';
        int_numeral_map[5] = 'V';
        int_numeral_map[10] = 'X';
        int_numeral_map[50] = 'L';
        int_numeral_map[100] = 'C';
        int_numeral_map[500] = 'D';
        int_numeral_map[1000] = 'M';

        std::vector<char> roman_numerals;
        for (int i = 0; i < number_length; i ++) {
            if (number_array[i] <= 5) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[1]);
                }
            }
        }
        std::string result;

        for (int i = 0; i < roman_numerals.size(); i ++) {
            result += roman_numerals[i];
        }
        return result;
    }
};