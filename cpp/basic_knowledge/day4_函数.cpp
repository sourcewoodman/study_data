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
int add(int num1, int num2)
{
    //num1、num2没有真正的数据。是一个形式参数，也叫形参
	int sum = num1 + num2;
	return sum;
}

// 调用
int main()
{
	cout << add(1, 2) << endl;
}


#include<iostream>
using namespace std;
