#include<iostream>
using namespace std;
int main() {
	double a, x, y, temp(0);
	cin >> a;
	x = a;
	do {
		y = (x + a / x) / 2;
		temp = x;
		x = y;
		y = temp;
	} while (temp - x < -1e-5 || temp - x>1e-5);
	cout << a << "的平方根为：" << x << endl;
	return 0;
}