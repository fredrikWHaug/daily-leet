class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        n = len(nums)
        for i in range(n):
            if nums[i] == val:
                nums[i] = (val + 1)
        # include some counter and return