#include <stdio.h>

// 表达式语句
void expression_statement() {
    int x = 1;
}

// 赋值语句
void assignment_statement() {
    int x = 1;
    int y = 2;
    int z;
    z = x + y;
}

// 控制语句
void control_statement() {
    int sum = 20;
    // 条件语句 if  else if   else   switch 
    // if else
    if (sum > 10) {
        printf("sum > 10\n");
    } else {
        printf("sum < 10\n");
    }
    // if   else if   else
    if (sum == 1) {
        printf("sum = 1\n");
    } else if (sum == 2) {
        printf("sum = 2\n");
    } else {
        printf("sum is else\n");
    }
    // switch语句
    int day = 3;
    switch (day) {
        case 1:
            printf("day = 1\n");
        case 2:
            printf("day = 2\n");
        case 3:
            printf("day = 3\n");
    }

    // 循环语句 for   while   do while
    // for
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    // while
    int j = 0;
    while (j < 5) {
        printf("j = %d\n", j);
        j ++;
    }
    // do while
    int k = 0;
    do {
        printf("k = %d\n", k);
        k ++;
    } while (k < 5);

    // 转向语句
    /*
    continue 作用是跳过当次循环，当循环语句执行到continue时，不会继续向下执行，会跳过当次循环，直接执行下一次循环
    break 中断语句，一般用于循环结构中，作用是终止循环
    return 跳出函数语句，用于跳出函数并返回一个值
    goto 强制转向语句
    goto语句一般用于跟if语句结合形成循环结构，需要先定义一个标志符（loop），表示goto转向到哪个地方
    */
    
}

int main() {
    control_statement();
}