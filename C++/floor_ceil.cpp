#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	float a,b;

	cout << "Enter the first number:";
	cin >> a;
	cout << "Enter the second number:";
	cin >> b;

	cout << "⌊" << a << "⌋: " << floor(a) << endl;
	cout << "⌈" << a << "⌉: " << ceil(a) << endl;
	cout << "⌊" << b << "⌋: " << floor(b) << endl;
	cout << "⌈" << b << "⌉: " << ceil(b) << endl;
    return 0;
}