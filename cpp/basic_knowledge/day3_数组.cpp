// 一维数组
// 如果不给值,会给一个垃圾值
#include <iostream>
using namespace std;
int main() {
    // 数据类型 数组名[数组长度]
    int list1[3];
    list1[0] = 1;
    list1[1] = 2;
    list1[2] = 3;    
    for (int i = 0; i < 35; i++) {
        cout << list1[i] << " ";
    }
    cout << endl;

    // 数据类型 数组名[数组长度] = {值1,值2,,,,}
    int list2[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        cout << list2[i] << " ";
    }
    cout << endl;

    // 数据类型 数组名[] = {值1,值2,,,,}
    int list3[] = {1,2,3,4};
    for (int i = 0; i < 1; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;
}

// 一维数组数组名
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    int list1[5] = {1, 2, 3, 4, 5};
    cout << "数组占用内存: " << sizeof(list1) << " 字节" << endl;
    cout << "单个元素占用内存: " << sizeof(list1[0]) << " 字节" << endl;
    cout << "数组中元素个数: " << sizeof(list1) / sizeof(list1[0]) << endl;
    cout << "数组首地址为: " << reinterpret_cast<uintptr_t>(list1) << endl;
    cout << "数组中第一个元素地址: " << reinterpret_cast<uintptr_t>(&list1[0]) << endl;
}

// 练习
// 数组元素逆置
// 请声明一个5个元素的数组，并且将元素逆置
#include <iostream>
using namespace std;
int main() {
    int list[5] = {1,2,3,4,5};
    int start = 0;
    int end = sizeof(list)/sizeof(list[0]) - 1;
    for (int i = 0; i < 5; i ++) {
        cout << list[i] << "";
    }
    cout << endl;
    while (start < end) {
        int a = list[start];
        list[start] = list[end];
        list[end] = a;
        start ++;
        end --;
    }
    for (int i = 0; i < 5; i ++) {
        cout << list[i] << "";
    }
    cout << endl;
}


// 二维数组
#include <iostream>
using namespace std;
int main() {
    // 数据类型 数组名[行数][列数]
    int list1[2][3];
    list1[0][0] = 1;
    list1[0][1] = 2;
    list1[0][2] = 3;
    list1[1][0] = 4;
    list1[1][1] = 5;
    list1[1][2] = 6;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << list1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 数据类型 数组名[行数][列数] = {{数据1, 数据2}, {数据3, 数据4}}
    int list2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << list1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 数据类型 数组名[行数][列数] = {数据1, 数据2, 数据3, 数据4}
    int list3[2][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++){
            cout << list3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 数据类型 数组名[][列数] = {数据1, 数据2, 数据3, 数据4}
    int list4[][2] = {1, 2, 3, 4};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << list4[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}