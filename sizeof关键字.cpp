#include<iostream>
using namespace std;

int main() {

	//���ͣ�short (2) int (4) long (4) long long (8)
	//��������sizeof�����������ռ���ڴ�Ĵ�С
	//�﷨��sizeof����������/������


	short numl = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << endl;

	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;

	int num3 = 10;
	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;


	system("pause");

	return 0;
}