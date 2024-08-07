/*
指针
可以通过指针间接访问内存
内存编号从0开始记录,用16进制数字表示
可以利用指针变量保存地址
*/

// 指针的定义和使用
#include<iostream>
using namespace std;
int main() {
    int a = 10;
    // 指针的定义语法:数据类型 * 变量名
    int * p;
    // 让指针记录变量a的地址
    p = &a;
    cout << "a address " << p << endl;
    cout << "a is " << *p << endl;
    if (a == *p) {
        cout << "same" << endl;
    }
    else {
        cout << "not same" << endl;
    }
    return 0;
}

// 指针占用内存空间
#include<iostream>
using namespace std;
int main() {
    int a = 123345378;
    int * p;
    p = &a;
    cout << sizeof(int *) << endl;
    cout << sizeof(double *) << endl;
    cout << sizeof(long *) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(float *) << endl;
    return 0;
}

/*
空指针,野指针
空指针：指针变量指向内存中编号为0的空间
用途：初始化指针变量
注意：空指针指向的内存是不可以访问的

野指针：指针变量指向非法的内存空间
*/

// const修饰指针
#include<iostream>
using namespace std;
int main() {
    // 1. 指向常量的指针 (pointer to constant)
    // 可以改变指针指向,不能改变指针指向的值
    const int *ptr1;
    int a = 10;
    int b = 20;

    ptr1 = &a;      // 合法，可以让ptr1指向a
    std::cout << "ptr1 points to value: " << *ptr1 << std::endl;
    // *ptr1 = 30;  // 非法，不能通过ptr1修改a的值
    ptr1 = &b;      // 合法，可以让ptr1指向b
    std::cout << "ptr1 now points to value: " << *ptr1 << std::endl;

    // 2. 常量指针 (constant pointer)
    // 指针指向不能修改,指针指向的值可以修改
    int * const ptr2 = &a;
    *ptr2 = 30;     // 合法，可以通过ptr2修改a的值
    std::cout << "a after modification through ptr2: " << a << std::endl;
    // ptr2 = &b;   // 非法，不能改变ptr2的指向

    // 3. 指向常量的常量指针 (constant pointer to constant)
    // 指针指向不可修改,指针指向的值不可修改
    const int * const ptr3 = &a;
    std::cout << "ptr3 points to value: " << *ptr3 << std::endl;
    // *ptr3 = 40;  // 非法，不能通过ptr3修改a的值
    // ptr3 = &b;   // 非法，不能改变ptr3的指向

    return 0;
}

// 指针和数组
#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4};
    int *p = arr;
    cout << *p << endl;
    p++;    // 指针移动四个字节
    cout << *p << endl;
}

// 指针和函数

