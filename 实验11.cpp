#include<iostream>
using namespace std;
int min(int num1, int num2) {
	int num3;
	num3 = (num1 < num2) ? num1 : num2;
	return num3;
}
int max(int num4, int num5) {
	int num6;
	num6 = (num4 > num5) ? num4 : num5;
	return num4;
}
int main() {
	int a; int b;
	cout << "������������:";
	cin >> a;
	cin >> b;
	int c;
	c=min(a, b);
	int d;
	d = max(a, b);
	for (; c > 1; c--) {
		if (d % c == 0) {
			cout <<"���Լ��Ϊ��" << c;
			break;
		}
	}

	for (; ; d++) {
		if(d%a==0&&d%b==0){
			cout << "��С������Ϊ��" << d;
			break;
		}
	}

}
