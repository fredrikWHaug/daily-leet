
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int result = 0;
        for (int i = 0; i < nums.size(); i ++) {
            int test = nums[i];
            for (int j = 0; j < nums.size(); j ++) {
                result = test + nums[j];
                if (result == target) {
                    return result;
                }
            }
        }


    }
};