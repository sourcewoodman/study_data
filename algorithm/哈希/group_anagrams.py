"""
字母异位分组
哈希不拘泥于{元素:索引},看实际的需求
把list变为字典有一些技巧,
字母异位分组的技巧是计算每个元素ord的总和作为划分索引的标准
也可以用也可以用sorted()对元素排序作为划分索引的标准
"""


def group_anagrams(str_list):
    hash_dic = {}
    for str_ in str_list:
        str_ord_sum = 0
        for i in str_:
            str_ord_sum += ord(i)
        if str_ord_sum not in hash_dic:
            hash_dic[str_ord_sum] = []
        hash_dic[str_ord_sum].append(str_)
    return list(hash_dic.values())


strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
print(group_anagrams(strs))
