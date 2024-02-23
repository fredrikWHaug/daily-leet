class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        n = len(nums)
        k = 1
        for i in range(n-1):
            if nums[i] == val and nums[i + 1] != val:
                nums[i] = nums[i+1]
                k += 1
        return k