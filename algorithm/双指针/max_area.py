"""
盛最多水的容器
对撞指针
初始化两个指针，一个指向数组的起始位置 (left)，一个指向数组的末尾位置 (right)。
在每一步中，计算由这两个指针所指向的高度形成的容器的容量。
更新最大容量 max_water。
根据当前左右指针所指向的高度，移动较短的那一侧的指针，以尝试找到更高的容器壁，从而可能增加容量。

关键点:找到移动指针的要素
比较两边最高点的大小是移动的要素
"""


def max_area(height_list):
    left, right = 0, len(height_list) - 1
    max_water = 0

    while left < right:
        w = right - left
        h = min(height_list[left], height_list[right])
        current_water = w * h
        max_water = max(max_water, current_water)

        if height_list[right] > height_list[left]:
            left += 1
        else:
            right -= 1
    return max_water


height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
print(max_area(height))
