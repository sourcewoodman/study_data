"""
最长连续序列
这个代码中哈希的作用是去重
"""


def longest_consecutive(num_list):
    hash_dic = {}
    longest_streak = 0
    for num in num_list:
        hash_dic[num] = True

    for num in num_list:
        if not num - 1 in num_list:
            current_num = num
            current_streak = 1

            while current_num + 1 in num_list:
                current_num += 1
                current_streak += 1
            longest_streak = max(longest_streak, current_streak)
    return longest_streak


nums = [100, 4, 200, 1, 3, 2]
# 输出: 4
print(longest_consecutive(nums))
