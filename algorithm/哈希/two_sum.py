"""
两数之和
核心是把list变为字典,{元素:索引}
代码的核心是怎么变,什么时候变
"""


def two_sum(num_list, targets):
    hash_dic = {}
    for i, num in enumerate(num_list):
        complement = targets - num

        if complement in hash_dic:
            return [hash_dic[complement], i]
        # 把list变为数字哈希字典{list中的元素:list中的索引}
        hash_dic[num] = i

    return []


nums = [2, 7, 11, 15]
target = 9
print(two_sum(nums, target))
