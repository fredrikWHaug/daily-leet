#include <cmath>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // make exponent for tenths place
        int exponent = digits.size() - 1;

        int total_value = 0;
        for (int i = 0; i < digits.size(); i ++) {
            digit += digits[i]*pow(10, exponent);
            exponent --;
        }
        int new_total_value = digit + 1;
        // invariant: new_total_value is the total value we want

        std::cout << new_digit << std::endl;
        return digits;
    }
};