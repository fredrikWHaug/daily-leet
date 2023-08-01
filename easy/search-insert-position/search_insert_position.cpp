class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int return_value;
        for (int i = 0; i < nums.size(); i ++) {
            if (nums[i] == target) {
                return i;
            } else if (target < nums[i]) {
                return i;
            } else {
                return nums.size();
            }
        }
        return 0;
    }
};