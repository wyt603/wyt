#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "三角形的三边长为";
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0) {
		cout << "该三角形不存在";
	}
	if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
		cout << "三角形的周长为：" << a + b + c << endl;
	}
	else(a == b || b == c || a == c);
		cout << "该三角形为等腰三角形";
}