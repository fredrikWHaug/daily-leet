class Solution(object):
    def returnToBoundaryCount(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        pos = 0
        boundary_hits = 0
        for i in range(len(nums)):
            pos += i
            if pos == 0:
                boundary_hits += 1
        return boundary_hits