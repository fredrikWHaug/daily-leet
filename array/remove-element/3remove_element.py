class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        n = len(nums)
        c = 1
        k = 0
        for i in range(n):
            if nums[i] == val:
                k += 1
                for j in range(i, n - i - 1):
                    nums[j] = nums[j + c]
                    c += 1
        return k
        # this is stupid