class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int start_range = nums[0];
        int n = nums.size();
        if (n == 0) return result;
        for (int i; i < nums.size(); ++i) {
            if (i == nums.size() || nums[i] != nums[i + 1]) {
                if (nums[i] != start_range) {
                    result.push_back(to_string(start_range) + "->" + to_string(nums[i]));
                } else {
                    result.push_back(to_string(start_range));
                }
                if (i != n-1) {
                    start_range = nums[i + 1];
                }
            }
        }
        return result;
    }
};
