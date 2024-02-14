class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        j_sub = 1
        for i in range(len(nums)):
            for j in range(len(nums)-j_sub):
                j = j_sub
                if nums[i] + nums[j] == target:
                    return [nums[i], nums[j-j_sub]]
                j_sub += 1
