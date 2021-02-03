#include <iostream>
using namespace std;

int qu7(){

    // 1、前置递增
    int a = 10;
    ++a; //让变量加一
    cout << "a = " << a << endl;

    // 2、后置递增
    int b = 10;
    b++; //让变量加一
    cout << "b = " << b << endl;

    // 3、前置和后置的区别
    //前置递增 先让变量加一 然后进行表达式运算
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2 = " << a2 << endl;
    cout << "b2 = " << b2 << endl;

    //后置递增 先进行表达式运算，后让变量加一
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3 = " << a3 << endl;
    cout << "b3 = " << b3 << endl;



    system("pause");

    return 0;

}

//总结：前置递增先对变量进行++，再计算表达式，后置递增相反