
for i in range(len(nums)-1):
    if nums[i] == 0:
        tmp = nums[i + 1]
        nums[i + 1] = nums[i]
        nums[i] = tmp