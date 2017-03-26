#include<stdio.h>
#include<windows.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 8;
	int left = 0;
	int mid;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr1[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr1[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("找到了\n");
	else
		printf("没找到\n");
	return 0;
}