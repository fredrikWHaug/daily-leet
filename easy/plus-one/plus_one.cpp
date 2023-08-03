#include <cmath>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // I say safest way is to record this
        // as an actual integer, add one, and
        // populate a new vector

        int digit = 0;
        int exponent = digits.size() - 1;
        for (int i = 0; i < digits.size(); i ++) {
            digit += digits[i] * pow(10, exponent);
            exponent --;
        }
        digit = digit + 1;

        int new_length = digits.size();
        if (digits.back() == 9) {
            new_length += 1;
        }

        vector<int> new_digit;
        for (int i = 0; i < new_length; i ++) {
            new_digit.push_back(digit[i]);
        }

        return new_digit;
    }
};
