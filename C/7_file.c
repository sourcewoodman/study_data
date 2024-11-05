#include <stdio.h>


/*
fgetc 从文件读取一个字符
fputc 向文件中写入一个字符
fgets 从文件读取一个字符串到字符数组中
fputs 将一个字符串写入到文件中，不包含'\0'
fread 从文件中读取一组固定大小的数据到内存空间
fwrite 写入一组固定大小的数据到文件中
fsacnf 从文件中获取指定格式的数据，跟scanf类似，输入对象换成了普通文件
fprintf 格式化输出数据到文件，跟printf类似，输出对象换成了普通文件

rewind 将文件的位置指针移动到文件头部
fseek 将文件的位置指针从规定的起始点移动到某个位置

feof 判断文件位置指针是否处于文件结束位置
ferror 检查文件在用各种输入输出函数进行读写时是否出错
clearerr 清除出错标志和文件结束标志，使它们为0值
*/

void file_operations() {
    // 文件指针 FILE *变量名
    FILE *file;

    // 打开文件
    /*
    r可读
    w可写
    a追加写入
    b二进制方式打开
    +可读写
    rb以二进制打开只读
    wb以二进制打开只写
    */
    file = fopen("test.txt", "w+");
    if (file == NULL) {
        printf("Failed to open file.\n");
        return;  // 退出函数
    }

    // 写入文件
    fputs("hello world", file);

    // 重置文件指针到文件开头
    fseek(file, 0, SEEK_SET);

    // 读取文件内容
    char ch;
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);             // 输出字符
    }

    // 关闭文件
    fclose(file);
    printf("\nFile closed successfully.\n");
}

int main() {
    file_operations();
    return 0;
}
