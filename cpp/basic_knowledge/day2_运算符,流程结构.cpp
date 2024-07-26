// 算术运算符   + - * / % 
#include <iostream>
using namespace std;
int main() {
    int a = 4;
    int b = 5;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    float c = a/b;  // result 0
    float float_a = static_cast<float>(a) / b;
    float float_b = a / static_cast<float>(b);cout << float_a << endl;
    cout << c << endl;
    cout << float_a << endl;
    cout << float_b << endl;
    // 取余
    cout << b % a << endl;
}

// 赋值运算符   ++(+1) --(-1) +=(可设置+) -=(可设置- )
#include <iostream>
using namespace std;
int main() {
    // 前置递增 先递增再赋值 
    int d = ++a;
    cout << a << " " << d << endl;
    // 后置递增 先赋值再递增
    int e = b++;
    cout << b << " " << e << endl;
    // 前置递减 先递增再赋值 
    int f = --a;
    cout << f << " " << d << endl;
    // 后置递减 先赋值再递增
    int g = b--;
    cout << g << " " << e << endl;
    // +=
    int h = (a += 3);
    cout << h << endl;
    // -=
    int i = (b -= 2);
    cout << i << endl;
}

// 比较运算符 == != < > <= >=
#include <iostream>
using namespace std;
int main() {
    int a = 2;
    int b = 3;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
}

// 逻辑运算符   !非  &&与  ||或
#include <iostream>
using namespace std;
int main() {
    bool a = 1;
    bool b = 0;
    cout << !a << endl;
    cout << !!a << endl;
    cout << (a && b) << endl;
    cout << (a && a) << endl;
    cout << (b && b) << endl;
    cout << (a || b) << endl;
    cout << (a || a) << endl;
    cout << (b || b) << endl;
}

// if语句
#include <iostream>
using namespace std;
int main() {
    int score = 2;
    // if
    if (score > 1) {
        cout << "1" << endl;
    }
    // if else
    if (score > 1) {
        cout << "1" << endl;
    } 
    else {
        cout << "2" << endl;
    }
    // if  else if   else
    if (score > 1) {
        cout << "1" << endl;
    } 
    else if (score > 2) {
        cout << "2" << endl;
    } 
    else {
        cout << "3" << endl;
    }
    // 嵌套if
    int a = 1;
    int b = 2;
    int c = 3;
    if (a > 1) {
        if (b > 1) {
            cout << "1" << endl;
        } 
        else {
            cout << "2" << endl;
        }
    } 
    else {
        cout << "3" << endl;
    }
}

// 三目运算符(本质是简化的条件运算符)   1,2,3  1为真返回2, 1为假返回3
#include <iostream>
using namespace std;
int main() {
    // condition ? expr1 : expr2;
    // condition这是一个布尔表达式。如果 condition 为true，计算返回expr1的值；如果 condition 为false，计算返回expr2的值。
    bool a = 1;
    int b = 2;
    int c = 3;
    int result = (a > 1) ? b : c;
    cout << result << endl;
}

// switch语句
// switch 语句常用于替代多个 if-else if-else 语句
#include <iostream>
using namespace std;
int main() {
    int a = 1;
    switch(a) {
        case 0: cout << 0 << endl; break;
        case 1: cout << 1 << endl; break;
        case 2: cout << 2 << endl; break;
    }
}

// 循环结构
// while
#include <iostream>
using namespace std;
int main() {
    int num = 1;
    while (num < 10) {
        cout << num << endl;
        num++;
    }
}
// do while
// 先执行do,再判断循环
#include <iostream>
using namespace std;
int main() {
    int num = 0;
    do {
        cout << num << endl;
        num ++;
    } while (num < 10);
}
// for
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
}
// 嵌套循环
#include <iostream>
using namespace std;
int main() {
    for (int a = 1; a < 10; a++) {
        for (int b = 1; b  <= a; b++) {
            cout << b << "*" << a << "=" << a * b << "  ";
        }
        cout << endl;
    }
}

// 跳转语句
// break
#include <iostream>
using namespace std;
int main() {
    for (int a = 1; a < 11; a++) {
        for (int b = 1; b < 6; b++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
// continue
#include <iostream>
using namespace std;
int main() {
    for (int a = 0; a < 10; a++){
        if (a % 2 != 0) {
            continue;
        }
        cout << a <<endl;
    }
}
// goto
// goto标记之后，跳转到标记的语句
#include <iostream>
using namespace std;
int main() {
    cout << 1 << endl;
    goto sign;
    cout << 2 << endl;
    sign:
    cout << 3 << endl;
}