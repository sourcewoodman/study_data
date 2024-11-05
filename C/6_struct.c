#include <stdio.h>
#include <string.h>

// 结构体
// 结构体定义   struct 结构名 {成员数据};
struct Person {
    char *name;
    int age;
    char sex;
    double height;
    char address[10];
};

// 结构体使用
void use_sturct () {
    // 定义结构体变量
    struct Person Person1;
    
    // 初始化结构体变量;
    Person1.name = "John";
    Person1.age = 10;
    Person1.sex = 'M';
    Person1.height = 100;
    snprintf(Person1.address, sizeof(Person1.address),"%s", "CityA");   // Person1.address 是一个字符数组，不能直接用字符串赋值。
    printf("Name: %s\n", Person1.name);
    printf("Age: %d\n", Person1.age);
    printf("Sex: %c\n", Person1.sex);
    printf("Height: %.2f\n", Person1.height);
    printf("Address: %s\n", Person1.address);

    struct Person Person2 = {
        .name = "Tom",
        .age = 11,
        .sex = 'W',
        .height = 101,
        .address = "CityB"
    };
    printf("Name: %s\n", Person2.name);
    printf("Age: %d\n", Person2.age);
    printf("Sex: %c\n", Person2.sex);
    printf("Height: %.2f\n", Person2.height);
    printf("Address: %s\n", Person2.address);

}

// 共用体
// 共用体定义   union 共用体名 {成员数据};
union Data {
    int i;
    float f;
    char str[10];
};

// 共用体使用
void use_union() {
    union Data Data1;
    Data1.i = 10;
    printf("i = %d\n",Data1.i);
    printf("i address:%p\n",&Data1.i);
    printf("f address:%p\n",&Data1.f);
    printf("str address:%p\n",&Data1.str);
                        
    Data1.f = 1.1;
    printf("f = %d\n",Data1.f);
    printf("i address:%p\n",&Data1.i);
    printf("f address:%p\n",&Data1.f);
    printf("str address:%p\n",&Data1.str);

    snprintf(Data1.str, sizeof(Data1.str), "test");
    printf("str = %s\n",Data1.str);
    printf("i address:%p\n",&Data1.i);
    printf("f address:%p\n",&Data1.f);
    printf("str address:%p\n",&Data1.str);
}

// 枚举
// 枚举（Enumeration）是一种自定义的数据类型，它允许定义一组命名的常量。枚举类型的变量只能赋值为枚举列表中的一个值，这些值被称为枚举常量。枚举类型是一种非常方便的方式来组织和描述常量。
// 枚举定义 enum 枚举名 {枚举常量列表};
// 枚举值默认red=0, green=1, blue=2
enum Color {
    Red,
    Green,
    Bblue
};
// 枚举值自定义
enum sex {
    man = 1,
    woman = 2
};

// 枚举使用
void use_enum() {
    enum Color color;
    color = Red;
    switch (color) {
        case Red:
            printf("red");
    }

}

// 动态内存分配
/* 
C语言常用的内存管理函数有四个：malloc、calloc、realloc、free
其中申请空间的函数是malloc、calloc；重新调整空间大小的函数是realloc；释放空间的函数是free
*/


int main () {
    use_sturct();
    use_union();
    use_enum();
}
 