#include <stdio.h>

// 指针
void pointer() {
    // 声明指针
    int *p1; //定义一个int类型的指针变量，指向的变量类型也必须是int
    char *p2; //定义一个char类型的指针变量，指向的变量类型也必须是char
    double *p3; //定义一个double类型的指针变量，指向的变量类型也必须是double

    // 指针的使用
    /*
    a1 = &a
    *a1 = a
    */
    int a = 1;
    int *a1 = &a;   //将变量a的地址赋值给指针a1
    printf("a = %d\n", a);    // a
    printf("address a = %p\n", &a);    //&a是a的地址   %p是指针的格式说明符
    printf("a1 = %p\n", a1);   //a1是指针p的值,a的地址
    printf("*a1 = %d\n", *a1);   //*a1是a的值,指针指向的值  *a1也叫做解引用

    // 空指针
    // 不指向任何有效的内存地址,表示指针未被初始化
    int *null_p = NULL;

    // 数组和指针
    // 数组的指针
    int arr[] = {1, 2, 3};
    int *arr_p = arr;
    int *arr1_p = &arr[0];
    printf("arr_p = %p\narr1_p = %p\n", arr_p, arr1_p);     //数组的指针也是数组中第一个元素的指针
    printf("*arr_p = %d\n*arr1_p = %d\n", *arr_p, *arr1_p);
    // 用指针遍历数组
    for (int i = 0; i < 3; i++) {
        printf("%d\n",*(arr_p + i));
    }

    // 指针的数组
    // 指针的数组是一个数组,其中每个元素都是指针,用来储存字符串或数组的地址
    const char *names[] = {"a", "b", "c"};
    printf("names = %p\n", names);
    for (int i = 0; i < 3; i++) {
        printf("name: %s\n", names[i]);
    }

    // 指针的指针
    int *p_a = &a;
    int **pp_a = &p_a;
    printf("a = %d\n", a);
    printf("p_a = %p\n", p_a);
    printf("pp_a = %p\n", pp_a);

    // 指针的运算
    int *operation_p = arr;
    printf("first %d\n", *operation_p);
    printf("second %d\n", *(operation_p + 1));
    printf("thired %d\n", *(operation_p - 1));

}

// 函数与指针
int pointer_func(int *p) {
    //指针的解引用是指向的值,对指向的值做自加
    return (*p)++;
}

int main() {
    pointer();
    int test = 1;
    int test_p = pointer_func(&test);
    printf("test_p = %p\n", test_p);
    printf("test = %d\n", test);    //指针的解引用是指向的值,对指向的值做自加
}