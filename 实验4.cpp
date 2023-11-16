#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint<<oct<<endl;
	cout << "output in char type:" << (int)static_cast<char>(testUnint) << endl;//将实数转化为int类型
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:因为超出short范围
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	system("pause");
	return 0;
}