class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int return_value;
        for (int i = 0; i < nums.size(); i ++) {
            if (nums[i] == target) {
                return_value = i;
            }
        }
        return return_value;
    }
};