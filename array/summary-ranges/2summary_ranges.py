class Solution(object):
    def summaryRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        output = []
        start = nums[0]
        for i in range(len(nums)):
            if nums[i + 1] != nums[i] + 1:
                output.append(f'{start}->{nums[i]}')
                start = nums[i+1]
        return output