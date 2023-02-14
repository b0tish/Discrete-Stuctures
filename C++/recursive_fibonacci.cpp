#include <iostream>
using namespace std;

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int main()
{	
	int lim;
	cout << "Enter number of the terms: ";
	cin >> lim;
	for (int i=0;i<lim;i++)
		cout << fib(i) << " ";
	return 0;
}