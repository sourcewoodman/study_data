#include <stdio.h>

int main() {
    // printf语句打印, 输入为(打印样式, 打印内容)
    
    // 字符型 %c
    // ''用来表示单个字符  ""用来表示字符串
    printf("character is %c\n", 'c');  // %c 用于打印单个字符

    // 整形 %d
    printf("integer is %d\n", 10);  // %d 用于打印整数

    // 实型 %f
    printf("float is %f\n", 3.14);  // %f 用于打印浮点数

    // 字符串 %s
    printf("string is %s\n", "string");  // %s 用于打印字符串

    return 0;
}
