class Solution(object):
    def missingNumber(self, nums):
        for i in range(len(nums)):
            if i not in nums:
                return i

        # checking if every number in the range
        # of the values in nums is actually in nums
        # by 'if not' and return that number if not