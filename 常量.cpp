#include<iostream>
using namespace std;

//�����Ķ��巽ʽ
//1��#define �곣��
//2�� const���εĳ���

//1��#define �곣��
constexpr auto Day = 7;


int  quf() 
{

	//Day = 7;//����Day�ǳ����������޸�
	cout << "һ���ܹ��У�" << Day << "��" << endl;


	//2��const���εı���
	const int month = 12;
	//month = 24; //����const���εı���Ҳ��Ϊ����

	cout << "һ���ܹ��У�" << month << "���·�" << endl;

	system("pause");

	return 0;


}
