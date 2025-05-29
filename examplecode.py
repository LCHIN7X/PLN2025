#binary search template
left, right = min_val, max_val
while left <= right:
    mid = (left + right) // 2
    if is_possible(mid):
        answer = mid
        right = mid - 1  # seek smaller value
    else:
        left = mid + 1   # need larger value

#sliding window template
left = 0
for right in range(len(nums)):
    window.add(nums[right])
    while window_invalid:  # when condition fails
        window.remove(nums[left])
        left += 1
    update_answer()