#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "�����ε����߳�Ϊ";
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0) {
		cout << "�������β�����";
	}
	if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
		cout << "�����ε��ܳ�Ϊ��" << a + b + c << endl;
	}
	else(a == b || b == c || a == c);
		cout << "��������Ϊ����������";
}