#include <stdio.h>
#include <complex.h>  // For complex number support
#include <stdbool.h>  // For bool type

// 一、数据类型和表达式
// 1. 基本类型
void basic_types() {
    // 字符型
    char a = 'A';
    // 常用于存储单个字符，例如用户输入或字符处理
    printf("char a = %c\n", a);
    printf("sizeof char a = %zu\n", sizeof(a));

    // 基本整型
    int b = 10;
    // 常用于一般整数计算，例如循环计数、数组索引
    printf("int b = %d\n", b);
    printf("sizeof int b = %zu\n", sizeof(b));
    
    // 短整型
    short c = 10;
    // 常用于需要较小范围整数的情况，以节省内存，例如某些嵌入式系统
    printf("short c = %d\n", c);
    printf("sizeof short c = %zu\n", sizeof(c));
    
    // 长整型
    long d = 1000000;
    // 常用于需要存储大整数的情况，例如大范围计数或大整数运算
    printf("long d = %ld\n", d);
    printf("sizeof long d = %zu\n", sizeof(d));
    
    // 无符号整型
    unsigned int e = 10;
    // 常用于不需要负数的情况，能存储更大的正整数，例如内存地址
    printf("unsigned int e = %u\n", e);
    printf("sizeof unsigned int e = %zu\n", sizeof(e));
    
    // 无符号长整型
    unsigned long f = 1000000;
    // 常用于需要大范围正整数的情况，例如文件大小、内存大小
    printf("unsigned long f = %lu\n", f);
    printf("sizeof unsigned long f = %zu\n", sizeof(f));

    // 单精度实型
    float g = 3.1;
    // 常用于需要小数的情况，但对精度要求不高，例如简单的科学计算
    printf("float g = %.1f\n", g);
    printf("sizeof float g = %zu\n", sizeof(g));

    // 双精度实型
    double h = 3.123;
    // 常用于需要高精度小数的情况，例如复杂的科学计算
    printf("double h = %.3f\n", h);
    printf("sizeof double h = %zu\n", sizeof(h));

    // 布尔型
    bool i = true;
    // 常用于逻辑条件判断，例如布尔标志、条件语句
    printf("bool i = %d\n", i);
    printf("sizeof bool i = %zu\n", sizeof(i));

    // 复数型
    double complex j = 1.0 + 2.0*I;
    // 常用于需要复数计算的情况，例如工程计算、信号处理
    printf("complex j = %.1f + %.1fi\n", creal(j), cimag(j));
    printf("sizeof complex j = %zu\n", sizeof(j));

    // 字符串型
    char k[] = "hello";
    // 常用于存储文本数据，例如用户输入、文本处理
    printf("string k = %s\n", k);
    printf("sizeof string k = %zu\n", sizeof(k));

    // 枚举类型
    enum color {red, green, blue};
    enum color m = red;
    // 常用于定义一组相关常量，例如状态码、颜色
    printf("enum color m = %d\n", m);
    printf("sizeof enum color m = %zu\n", sizeof(m));
    
    // 自定义类型
    typedef int myint;
    myint n = 10;
    // 常用于简化复杂类型的定义，例如定义一个特定用途的类型
    printf("myint n = %d\n", n);
    printf("sizeof myint n = %zu\n", sizeof(n));
    
    // 类型转换
    int o = 10;
    float p = (float)o;
    // 常用于需要将一个类型的数据转换为另一个类型的情况，例如整数转浮点数
    printf("float p = %.1f\n", p);
    printf("sizeof float p = %zu\n", sizeof(p));
    
    // 类型限定符
    const int q = 10;
    // 常用于定义只读变量，保证其值不被修改，例如常量
    printf("const int q = %d\n", q);
    printf("sizeof const int q = %zu\n", sizeof(q));

    a = "d";
    printf(a);
}

int main() {
    basic_types();
    return 0;
}
