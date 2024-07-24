"""
移动零
快慢指针
快指针i遍历数组
慢指针j记录非零元素位置
对换i和j元素的位置

关键点:找到移动指针的要素
慢指针作用是移动的要素
"""


def move_zeroes(num_list):
    j = 0
    for i in range(len(num_list)):
        if num_list[i] != 0:
            num_list[j], num_list[i] = num_list[i], num_list[j]
            j += 1
    return num_list


nums = [0, 1, 0, 3, 12]
print(move_zeroes(nums))
