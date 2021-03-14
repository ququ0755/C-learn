#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    string myName ="qufan";
    
    cout << myName << endl; //endl; = end of line 打印字符串 
    
    int year; // 年份 
	cout << "请输入今年的年份 : ";
	cin >> year;
	cout << "输入的年份是" << year << endl; 
	
	int ages[5] = {50,15,30,27,40} ;
	
	for (int i=0;i<5;i++) {
       	//cout << "记录的人年龄是" << ages[i] << endl;  
       	cout << "记录的人年龄是" << ages[i] << endl;
	} 
	
	int sum;
	int a = 3;
	int b = 5;
	sum = a + b;
	cout << " a + b = " << sum <<endl;
	
	int mul; //multiply
	mul = a * b;
	cout << " a * b = " << mul << endl;
	
	int qu;
	qu = b - a;
	cout << " b - a = " << qu << endl;
	
	//计算长方形的面积 
	int area;
	int length = 10;
	int height = 20;
	area = length * height ;
	cout << "长方形面积等于" << area << endl;
	
	cout << "请输入长方形的长度" ;
	cin >> length ;
	cout << "请输入长方形的宽度" ;
	cin >> height ; 
	area = length * height ;
	cout << "长方形面积等于"  << length << "*" << height << "=" << area << endl;
    
	return 0;

}


