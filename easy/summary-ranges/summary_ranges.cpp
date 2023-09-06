class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output_vector;
        int start = nums[0];
        int end = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i+1] >= nums[i]) {
                if (start == end) {
                    output_vector.push_back(nums[i]);
                }
            } else {
                outpu_vector.push_back(f"{nums[start]} -> {nums[end]}");
            }
        }
    }
};
