#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
	int tmp = 0;
	for(int i = 0; i < size - 1; i ++)
	{
		for(int j = 0; j < size - 1 - i; j ++)
		{
			if(arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
	}	
}
	
int main()
{
	//小王添加的注释
	int arr[] = {12, 4, 89, 67, 42};
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, size);
	return 0;
}
