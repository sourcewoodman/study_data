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
// 常见的进制
// 八进制是由二进制以三个为一组得出
// 十六进制是由二进制以四个为一组得出
void system() {
    // 二进制 以0b开头
    int a = 0b10;
    printf("%d\n", a); // %d是以十进制打印
    int b = 10;
    printf("%d\n", b);
    // 八进制 以0开头
    int c = 011;
    printf("%d\n", c);
    // 十六进制 以0x开头
    int d = 0x17;
    printf("%d\n", d);
}

/*
任意进制转为十进制
系数*基数的权次幂
系数:每一位上的数
基数:当前的进制
权:从右往左0,1,2,3,4
例如:
二进制101
转十进制计算过程:1*2^2+0*2^1+1*2^0 = 5
八进制101
转十进制计算过程:1*8^2+0*8^1+1*8^0 = 65

二进制转十进制
8421快速转换法:套用

十进制转其他进制:除基取余法
*/

// 数据类型
 /* 
 二进制中0或1都占用1bit
 计算机最小的存储单位就是1kb,占用8bit
 sizeof 打印占用字节用%zu占位 sizeof(变量名字/数据类型)
 */
void data_type() {
    // 整型
    // short 2kb, 16bit ,2^16, -32768~32767
    short a = 32767;
    printf("%d\n", a);
    printf("%zu\n", sizeof(a));
    // int 占用4kb,32bit,所以是2^32位的二进制, -2147483648~2147483647
    int b = 1;
    printf("%d\n", b);
    printf("%zu\n", sizeof(b));
    // long windows 4kb, linux 32位4字节 64位8字节
    long c = 1L;
    printf("%ld\n", c);
    printf("%zu\n", sizeof(c));
    // long long
    long long d = 1LL;
    printf("%lld\n", d);
    printf("%zu\n", sizeof(d));

    // 实型
     /*
     C语言默认为double类型
     实型不能和unsigned组合
     实型的取值范围比整型取值范围大
     */
    //float单精度 精确到小数点后6位, 4kb, 1.175*10^-38 ~ 3.402*10^38 
    float e = 3.14F;    // 用F做后缀
    printf("%f\n", e);
    printf("%.2f\n", e);    // 保留小数点后两位
    printf("%zu\n", sizeof(e));
    // double双精度 精确到小数点后15位, 8kb, 2.225*10-308 ~ 1.797*10^308
    double f = 1.15;
    printf("%lf\n", f);
    printf("%.2lf\n", f);    // 保留小数点后两位
    printf("%zu\n", sizeof(f));
    // long double高精度 精确到小数点后18位, 8kb
    long double g = 1.15L;  //用L做后缀
    printf("%lf\n", g);
    printf("%.2lf\n", g);    // 保留小数点后两位
    printf("%zu\n", sizeof(g));

    // 字符
    // char 1kb, 取值范围:ASCII码表所有的内容
    char h = '1';
    printf("%c\n", h);
    printf("%zu\n", sizeof(h));
}

// 符号整数
void signed_int() {
    // 有符号整数:正数, 负数
    signed int a = -100;
    printf("%d\n", a);
    // 无符号整数:正数
    unsigned int b = 100;
    printf("%u\n", b);

    unsigned short c = 100; // 取值范围:0~65535
    printf("%u\n", c);
}

// 标识符
 /*
 代码中自定义的名字都是标识符
 由数字,字母,下划线组成
 不能以数字开头
 不能是关键字
 区分大小写
 */ 

// 键盘录入 scanf
void keyboard_input() {
    int a;
    scanf("%d\n", &a);
    printf("%d\n", a);
}
int main() {
    keyboard_input();
}