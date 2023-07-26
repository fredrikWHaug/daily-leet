class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // return the size of a unique array

        // 1. store the index
        // 2. if the stored index is equal to the curent index
        // increment count
        // if count == 2, do not add to new list
        // if it is == 1, don't add it
        // reset count
        // 3. if the ith element does not appear again, 
        // append the element to the new list

        vector<int> duplicate_free_list;
        int count;

        for (int i = 0; i < nums.size(); i ++) {
            if (count < 2) {
                duplicate_free_list.push_back(nums[i-1]);
            }
            int index = nums[i];
            for (int j = 0; j < nums.size(); j ++) {
                if (index == nums[j]) {
                    count ++;
                }
            }
        }

        std::cout << duplicate_free_list.size() << std::endl;
        return duplicate_free_list.size();
    }
};