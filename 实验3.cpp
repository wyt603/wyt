#include<iostream>
#define yzl 3.14
using namespace std;
int main() {
	double radius ;
	cout << "该圆锥的半径为：";
	cin >> radius;
	double height ;
	cout << "该圆锥的高为：";
	cin >> height;
	double area= yzl * height * radius * radius / 3;
	cout << "该圆锥的体积为：" << area;
}