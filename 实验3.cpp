#include<iostream>
#define yzl 3.14
using namespace std;
int main() {
	double radius ;
	cout << "��Բ׶�İ뾶Ϊ��";
	cin >> radius;
	double height ;
	cout << "��Բ׶�ĸ�Ϊ��";
	cin >> height;
	double area= yzl * height * radius * radius / 3;
	cout << "��Բ׶�����Ϊ��" << area;
}