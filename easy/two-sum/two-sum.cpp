#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::vector<int> result;
        for (int i = 0; i < nums.size(); i ++) {
            int test = nums[i];
            for (int j = i+1; j < nums.size(); j ++) {
                int check = test + nums[j];
                if (check == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};
