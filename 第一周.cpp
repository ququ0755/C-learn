#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    string myName ="qufan";
    
    cout << myName << endl; //endl; = end of line ��ӡ�ַ��� 
    
    int year; // ��� 
	cout << "������������� : ";
	cin >> year;
	cout << "����������" << year << endl; 
	
	int ages[5] = {50,15,30,27,40} ;
	
	for (int i=0;i<5;i++) {
       	//cout << "��¼����������" << ages[i] << endl;  
       	cout << "��¼����������" << ages[i] << endl;
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
	
	//���㳤���ε���� 
	int area;
	int length = 10;
	int height = 20;
	area = length * height ;
	cout << "�������������" << area << endl;
	
	cout << "�����볤���εĳ���" ;
	cin >> length ;
	cout << "�����볤���εĿ��" ;
	cin >> height ; 
	area = length * height ;
	cout << "�������������"  << length << "*" << height << "=" << area << endl;
    
	return 0;

}


