#include <iostream>
#include <cmath>
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

        [2, 4, 5, 9]

        int exponentiation = number_length - 1;
        std::vector<char> roman_numerals;
        for (int i = 0; i < number_length; i ++) {
            number_array[i] = number_array[i]*pow(10, exponentiation); 
            if (number_array[i] >= 1 && number_array[i] < 5) {
                
            } else if (number_array[i] >= 5 && number_array[i] < 10) {

            } else if (number_array[i] >= 10 && number_array[i] < 50) {

            } else if (number_array[i] >= 50 && number_array[i] < 100) {

            } else if (number_array[i] >= 100 && number_array[i] < 500) {
                
            } else if (number_array[i] >= 500 && number_array[i] < 1000) {

            } else {
                
            }
        }
        std::string result;

        for (int i = 0; i < roman_numerals.size(); i ++) {
            result += roman_numerals[i];
        }
        return result;
    }
};