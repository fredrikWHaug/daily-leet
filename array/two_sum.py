class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        result = []
        for i in range(len(nums)):
            if len(result) == 2:
                return result
            for j in range(len(nums)):
                if nums[i] + nums[j] == target:
                    result.append(i)
                    result.append(j)
        return result