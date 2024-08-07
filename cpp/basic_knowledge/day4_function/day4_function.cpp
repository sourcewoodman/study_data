#include"day4_function.h"
void func(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
}

#include<iostream>
#include"day4_function.h"
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    func(a, b);
    return 0;
}
