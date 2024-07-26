// 打印hello world
#include <iostream>
using namespace std;

int main() {
    // cout 是 C++ 标准库中的流输入/输出（I/O）功能的一部分
    // 性能差,数据安全,处理复杂格式困难
    cout << "hello world" << " " << "123" << endl;  //打印hello world
    // C 标准库中的函数
    // 性能强,数据安全问题,可读性差
    printf("hello world");
    // system("pause");    // 在终端中运行时，暂停程序
    return 0;
}

// 单行注释用//

// 多行注释用/**/

//变量  指定一段内存取名字,方便操作
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "a = " << a << endl;
    return 0;
}

// 常量
// 方法一 #define
#include <iostream>
using namespace std;

#define a 10

int main() {
    cout << "a = " << a << endl;
    return 0;
}
// 方法二 const
#include <iostream>
using namespace std;

const int a = 10;

int main() {
    cout << "a = " << a << endl;
    return 0;
}
// 方法三 constexpr
#include <iostream>
using namespace std;

constexpr int a = 10;

int main() {
    cout << "a = " << a << endl;
    return 0;
}

// 关键字
/*
if else while int char .....
*/

// sizeof 关键字 统计数据类型所占空间大小 单位为byte
#include <iostream>
using namespace std;

int main() {
    long long long_long_num = 10;
    cout << "num_size is " << sizeof(long_long_num) << endl;
    return 0;
}

//数据类型
// 整形
#include <iostream>
using namespace std;

int main() {
    // 短整形
    short short_num = 10;
    cout << "short_num = " << short_num << endl;
    cout << "short_num_size is " << sizeof(short_num) << endl;
    // 整型
    int int_num = 10;
    cout << "int_num = " << int_num << endl;
    cout << "int_num_size is " << sizeof(int_num) << endl;
    // 长整型
    long long_num = 10;
    cout << "long_num = " << long_num << endl;
    cout << "long_num_size is " << sizeof(long_num) << endl;
    // 长长整形
    long long long_long_num = 10;
    cout << "long_long_num = " << long_long_num << endl;
    cout << "long_long_size is " << sizeof(long_long_num) << endl;
    return 0;

}

// 实型 浮点型
#include <iostream>
using namespace std;

int main() {
    // 单精度
    float float_num = 0.1;
    cout << "float_num = " << float_num << endl;
    cout << "float_num_size is " << sizeof(float_num) << endl;

    // 双精度
    double double_num = 0.1;
    cout << "double_num = " << double_num << endl;
    cout << "double_num_size is " << sizeof(double_num) << endl;

    return 0;
}

// 字符型
#include <iostream>
using namespace std;
int main() {
    // char只能储存一个字符,通常是ASCII字符集中的字符,汉字是Unicode字符集,因此不能表示汉字,
    char a = 'a';
    cout << "a" << a << endl;
    cout << "a_size is " << sizeof(a) << endl;
    // (int) 是把a强制转换成int类型,根据ASCII编码值转换
    cout << (int)a << endl;
}

// 字符串型
#include <iostream>
using namespace std;
int main() {
    // char 变量名[] = " "
    char test[] = "tests";
    cout << test << endl;
    cout << sizeof(test) << endl;
    // string 变量名 = " "  c++常用
    string test1 = "test";
    cout << test1 << endl;
    cout << sizeof(test1) << endl;
}

// 布尔类型
#include <iostream>
using namespace std;
int main() {
    bool a = 1;
    cout << a << endl;
    cout << sizeof(a) << endl;
}

// 转义字符
#include <iostream>
using namespace std;
int main() {
    // 想要输出',",\,换行\n,水平制表\t,退格符\b,退格符\b
    cout << "\'" << endl;
}


// auto自动推断变量类型,typeid().name()查看数据类型
// int i, double  d, float  f, char c, string  NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, bool  b, 
#include <iostream>
using namespace std;
int main() {
    long long a = 1;
    float b = 1.1;
    auto c = 'a';
    string d = "a";
    auto e = true;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
}

// 数据输入 类似python的input
#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "input:" << endl;
    cin >> a;
    cout << a << endl;
}