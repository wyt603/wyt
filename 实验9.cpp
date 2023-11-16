#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "Please enter an equation : " << endl;
	cin >> a;
	cin >> c;
	cin >> b;
	switch (c)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '%': cout << a << " % " << b << " = " << a % b << endl; break;
	case '/': {
		if (b == 0)
			cout << "无法计算" << endl;
		else
			cout << a << " / " << b << " = " << a / b << endl; break; }
	default: cout << "你逗我呢" << endl; break;
	}

	return 0;
}