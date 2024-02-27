def remove_element(nums, val):
    n = len(nums)
    index = 0
    for i in range(n):
        if nums[i] != val:
            nums[index] = nums[i]
            index += 1
    return index

def main():
    val = 2
    nums = [1, 2, 2, 3, 4, 5]
    k = remove_element(nums, val)
    print(k)

if __name__ == '__main__':
    main()
    