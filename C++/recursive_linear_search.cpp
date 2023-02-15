#include <iostream>
using namespace std;

int search(int *arr, int num, int size, int index)
{
	if (index == size)
		return -1;

	if (arr[index] == num)
		return index;
	else
		return search(arr, num, size, index+1);
}

int main()
{
	int arr[] = {10,20,30,40,50};
	int num = 30;

	int size = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Array=[";
	for (int i=0; i < size; i++)
	{
		cout << arr[i] << (i == size-1 ? "" : ",");
	}
	cout << "]" << endl;

	cout << "Number to be found: " << num << endl;

	int index = search(arr,num,size,0);

	if (index != -1)
		cout << "Element is found at index: " << index << endl;
	else
		cout << "Element not found";
	return 0;
}

