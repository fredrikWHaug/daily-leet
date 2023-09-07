class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if (nums.size() == 0) return result;
        int a = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (a == nums.size() - 1 || a != nums[i] + 1) {
                
            }
        }
        }
    }
};
