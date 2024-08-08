// 2. 构造类型
// 1）数组类型
void array_type() {
    int arr[3] = {1, 2, 3};
    
    printf("数组类型示例:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

// 2）结构体类型
struct Point {
    int x;
    int y;
};

void struct_type() {
    struct Point p1 = {10, 20};
    
    printf("结构体类型示例:\n");
    printf("Point p1: x = %d, y = %d\n", p1.x, p1.y);
}

// 3）共用体类型
union Data {
    int i;
    float f;
    char str[20];
};

void union_type() {
    union Data data;
    data.i = 10;
    
    printf("共用体类型示例:\n");
    printf("Data.i = %d\n", data.i);
    data.f = 220.5;
    printf("Data.f = %.2f\n", data.f);
    sprintf(data.str, "C Programming");
    printf("Data.str = %s\n", data.str);
}