#include <stdio.h>


void keyword() {
    // 关键字有32个
    // 会被高亮显示
}



// 常量:在程序执行过程中,其值不能发生改变的数据
// 1234000是整型
// 1.234*10 6不是常量是一个计算过程
// 1.2340000E7是实型
void contant() {
    // 整型常量
    int a = 1;
    printf("%d\n", a);

    // 实型常量
    float b = 0.1;
    printf("%f\n", b);

    // 字符常量
    // 只能写大小写英文字母,数字,英文状态下的标点符号
    char c = 'a';
    printf("%c\n", c);

    // 字符串常量
    char str[] = "Hello world";
    printf("%s\n", str);
}


// 变量
void variable() {
    // 定义格式:数据类型 变量名;
    int variate;
    // 变量使用
    variate = 10;
    printf("%d\n", variate);

}

// 计算机存储规则

int main() {
    variable();
}