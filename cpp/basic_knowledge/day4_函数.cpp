// 函数格式
/*
返回值类型 函数名 (参数列表)
{
    函数体语句;
    return 表达式;
}
*/
#include<iostream>
using namespace std;
int add(int num1, int num2) {
    //num1、num2没有真正的数据。是一个形式参数，也叫形参
	int sum = num1 + num2;
	return sum;
}

// 调用
int main() {
	cout << add(1, 2) << endl;
}


// 函数常见形式
#include<iostream>
using namespace std;
// 无参无返
// 若函数不需要返回值，声明的时候可以写void
void no_param_no_return() {
    cout << "n_n" << endl;
}
// 有参无返
void have_param_no_return(int test) {
    cout << "h_n" << test << endl;
}
// 无参有返
int no_param_have_return() {
    cout << "n_h" << endl;
    return 1;
}
// 有参有饭
int have_param_have_return(int test) {
    cout << "h_h" << endl;
    return test;
}

int main() {
    no_param_no_return();
    have_param_no_return(1);
    cout << no_param_have_return() << endl;
    cout << have_param_have_return(2) << endl;
}

/*
函数分文件编写
头文件为.h
源文件为.cpp
头文件写函数声明
源文件写函数定义

函数声明可以有多次,函数的定义只能有一次
声明是说明函数存在,定义是函数如何写
*/