#include <iostream>
#include <cmath>
#include <map>

class Solution {
public:
    string intToRoman(int num) {
        
        // convert to a string of numbers
        std::string number_string = std::to_string(num);

        int number_length = number_string.length();
        int number_array[number_length];

        // iterate over string and populate an array with the digits as integers
        for (int i = 0; i < number_length; i ++) {
            char number_char = number_string[i];
            int number = number_char - '0';
            number_array[i] = number;
        }
        // we now have an array containing all the digits (integer data type)

        int exponent = number_length - 1;
        for (int i = 0; i < number_length; i ++) {
            int tenths_place = pow(10, exponent);
            number_array[i] = number_array[i] * tenths_place;
            if (number_array[i] < 5) {
                
            }
            exponent --;
        }
        return "III";
    }
};















        // std::string result;
        // for (int i = 0; i < roman_numerals.size(); i ++) {
        //     result += roman_numerals[i];
        // }
        // return result;

        // hashmap mapping an integer value to its roman numeral
        // std::map<int, char> int_numeral_map;
        // int_numeral_map[1] = 'I';
        // int_numeral_map[5] = 'V';
        // int_numeral_map[10] = 'X';
        // int_numeral_map[50] = 'L';
        // int_numeral_map[100] = 'C';
        // int_numeral_map[500] = 'D';
        // int_numeral_map[1000] = 'M';

        //std::vector<char> roman_numerals;