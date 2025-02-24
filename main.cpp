#include <iostream>
using namespace std;

void sort(int arr[], int i, int j)
{
	int val = arr[i];
	int l = i;
	int r = j;
	while(l < r)
	{
		while(l < r && arr[r] >= val) r --;
		if(l < r)
		{
			arr[l ++] = arr[r];
		}
		while(l < r &&arr[l] <= val) l ++;
		if(l < r)
		{
			arr[r --] = arr[l];
		}
		arr[l] = val;
		sort(arr, i, l - 1);
		sort(arr, l + 1, j);
 	}
}

//小陆添加的函数注释
void sort(int arr[], int size)
{
	sort(arr, 0, size);
}
	
int main()
{
	//小王添加的注释
	int arr[] = {12, 4, 89, 67, 42};
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr, size);
	for(int i = 0; i < size; i ++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
