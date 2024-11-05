#include <stdio.h>


// 加减乘除取余+-*/% ++ --
void arithmetic() {
    // +-*
    int a = 3;
    int b = 2;
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    // / 
     /*
     整数计算的结果一定是整数
     小数计算的结果一定是小数
     整数和小数计算结果一定是小数
     小数直接参与计算,结果是有可能不精确的
     */
    printf("%d\n", 4 / 2);   // 2
    printf("%.2lf\n", 4 / 2);   // 0.00 数据类型不对,会输出为0.00
    printf("%.2lf\n", 3.1 / 2.1);
    printf("%.2lf\n", 3 / 2.1);

    /*
    取余计算必须全是整数
    取余的结果跟第一个数字保持一致
    */
   printf("%d\n", 10 % 3);  // 1
   printf("%d\n", -10 % 3); // -1
   printf("%d\n", 10 % -3); // 1

   // ++ --   默认为+1,-1
   int c = 10;
   c ++;    // 后++ 
   ++ c;    // 前++,与后++结果一致

   c --;
   -- c;
   printf("%d\n", c);

   // 参与计算的自增自减运算符
   int d = 10;
   int e = d ++;    // 先用后加  10
   int f = ++ d;    // 先加后用  12
   printf("%d %d\n", e, f);
}

// 隐式转换
/*
把取值范围小转换为取值范围大
程序会自动完成转换
short char 类型的数据在运算时,先提升为int,在进行运算
取值范围大小关系: char < short < int < long < long long < float < double
*/
void implicit_conversion() {
    short a = 10;
    double b = 12.3;
    double c = a + b;  // c为double
    
}

// 强制转换
/*
把取值范围大的赋值给取值范围小的
强转数值过大会有错误
*/
void type_coercion() {
    int a = 10;
    short b = (short)a;
}

// 字符相加
/*
根据ASCII,字符转int再相加
*/


// 赋值运算符


int main() {
    arithmetic();
}