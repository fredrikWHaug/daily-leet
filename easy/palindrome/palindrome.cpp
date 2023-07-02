#include <iostream>
#include <vector>
#include <algorithm>

// this works

class Solution {
public:
    bool isPalindrome(int x) {

        std::vector<int> my_list = {1, 2, 3};

        std::reverse(my_list.begin(), my_list.end());

        for (const auto& element : my_list) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
        return true;
    }
};

// here is a way to split an integer into a list of individual characters

#include <iostream>
#include <vector>
#include <string>

int main() {
    int number = 12345;
    std::string numberString = std::to_string(number);
    std::vector<char> digits;

    for (char c : numberString) {
        digits.push_back(c);
    }

    // Print the split digits
    for (char digit : digits) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
