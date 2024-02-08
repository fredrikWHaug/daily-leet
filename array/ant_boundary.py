class Solution(object):
    def returnToBoundaryCount(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ant_pos = 0
        boundary_crossings = -1
        for i in range(nums):
            if ant_pos == 0:
                boundary_crossings += 1
            if nums[i] > 0:
                ant_pos += 1
            elif nums[i]< 0:
                ant_pos -= 1
        return boundary_crossings