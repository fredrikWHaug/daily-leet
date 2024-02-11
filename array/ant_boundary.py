class Solution(object):
    def returnToBoundaryCount(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        pos = 0
        boundary_check = None
        boundary_counter = 0
        for i in range(len(nums)):
            pos += nums[i]
            boundary_check = pos
            if boundary_check == 0:
                boundary_counter += 1
        return boundary_counter