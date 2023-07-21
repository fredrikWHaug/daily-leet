#include <iostream>
#include <cmath>
#include <map>

class Solution {
public:
    string intToRoman(int num) {
        

        // hi
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

        // hashmap mapping an integer value to its roman numeral
        std::map<int, char> int_numeral_map;
        int_numeral_map[1] = 'I';
        int_numeral_map[5] = 'V';
        int_numeral_map[10] = 'X';
        int_numeral_map[50] = 'L';
        int_numeral_map[100] = 'C';
        int_numeral_map[500] = 'D';
        int_numeral_map[1000] = 'M';

        int exponentiation = number_length - 1;
        std::vector<char> roman_numerals;

        // possibly unnecessarily cumbersome conditional but I think it gets the job done at least?
        for (int i = 0; i < number_length; i ++) {
            int power = number_array[i]*pow(10, exponentiation); 
            if (number_array[i] < 5) {
                roman_numerals.push_back(int_numeral_map[1]);
                }
            } else if (power >= 5 && power < 10) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[5]);
                }
            } else if (power >= 10 && power < 50) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[10]);
                }
            } else if (power >= 50 && power < 100) {
                for (int j = 0; j < number_array[i]; j++) {
                    roman_numerals.push_back(int_numeral_map[50]);
                }
            } else if (power >= 100 && power < 500) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[100]);
                }
            } else if (power >= 500 && power < 1000) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[500]);
                }
            } else {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[1000]);
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




        // I think this is actually very stupid
        for (int i = 0; i < number_length; i ++) {
            int power = number_array[i]*pow(10, exponentiation); 
            if (power >= 1 && power < 5) {
                for (int j = 0; j < number_array[i]; j ++){
                    roman_numerals.push_back(int_numeral_map[1]);
                }
            } else if (power >= 5 && power < 10) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[5]);
                }
            } else if (power >= 10 && power < 50) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[10]);
                }
            } else if (power >= 50 && power < 100) {
                for (int j = 0; j < number_array[i]; j++) {
                    roman_numerals.push_back(int_numeral_map[50]);
                }
            } else if (power >= 100 && power < 500) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[100]);
                }
            } else if (power >= 500 && power < 1000) {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[500]);
                }
            } else {
                for (int j = 0; j < number_array[i]; j ++) {
                    roman_numerals.push_back(int_numeral_map[1000]);
                }
            }
        }
