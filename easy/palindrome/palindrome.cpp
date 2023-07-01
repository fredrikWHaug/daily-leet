
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        
        std:vector<int> numbers;
        for (int i = 0; i < x; i ++) {
            numbers.push_back(i);
        };

        vector<int> reverse_numbers = reverse(numbers);
        for (const auto& number : reverse_numbers) {
            std::cout << number << " ";
        }
        std::cout << std::endl;
        return 0;
    }

    static vector<int> reverse(std::vector<int> list) {
        return std::reverse(list.begin(), list);
    }
};