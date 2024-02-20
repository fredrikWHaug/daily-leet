class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        result = []
        for i in range(n-1):
            if nums[i] == nums[i + 1]:
                if nums[i] not in result:
                    result.append(nums[i])
                
