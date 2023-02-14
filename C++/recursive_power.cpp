#include <iostream>
using namespace std;

double pow(double n, int p)
{
	if (p == 0)
		return 1;
	else if (p < 0)
		return 1.0 / pow(n , -p);
	else
		return n * pow(n, p-1);
}

int main()
{
	int num, power;
	cout << "Enter a number:";
	cin >> num;
	cout << "Enter the power:";
	cin >> power;
	cout << num << " to the power " << power << ": " << pow(num,power);
	return 0;
}