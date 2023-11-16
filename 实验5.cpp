#include<iostream>
using namespace std;
int main() {
	double temperature;
    cout << "华氏温度为：";
    cin >> temperature; 
    cout<<"摄氏温度为："<< 9 * temperature / 5 + 32;
}