#include <iostream>
#include <math.h>
#include <vector>

using std::cout;
using std::vector;
using std::cin;
using std::endl;

void _list(int a,vector<int> &num1)
{
	while (a != 0)
	{
		num1.push_back(a % 10);
		a /= 10;
	}
}

void match_num(vector<int> &num1,vector<int> &num2)
{
	for (int i=0;i<abs(num1.size()-num2.size());i++)
		if (num1.size() < num2.size())
		{
			num1.push_back(0);
		}
		else
		{
			num2.push_back(0);
		}
}

void binary_add(vector<int> &num1,vector<int> &num2,vector<int> &s)
{
	int c = 0;
	int d = 0;
	for (int j=0;j<num1.size();j++)
	{
		d = (num1[j] + num2[j] + c) / 2;
		s.insert(s.begin(),num1[j]+num2[j]+c-2*d);
		c = d;
	}
	s.insert(s.begin(),c);
}

int main()
{
	int a,b;
	long long int s = 0;
	vector<int> num1;
	vector<int> num2;
	vector<int> sum;

	cout << "Enter the first binary number:";
	cin >> a;

	cout << "Enter the second binary number:";
	cin >> b;

//Converts the integer into "list" <vector>
	_list(a,num1);
	_list(b,num2);

//Equalizing the number of digits of both vectors
	match_num(num1,num2);

//Adding the binary numbers
	binary_add(num1,num2,sum);

	for (auto &i : sum)
	{
		s = s *10 + i;
	}

	cout << "Sum=" << s <<endl;
	return 0;
}