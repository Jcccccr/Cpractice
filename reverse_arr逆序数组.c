#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Reserve_arr(int str[])                      //不带指针的写法   
//{
//	int i = 0;            
//	int tmp;
//	for (i = 0; i < 5; i++)
//	{
//		tmp = str[i];
//		str[i] = str[9 - i];
//		str[9 - i] = tmp;
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	Reserve_arr(arr);
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}


//带指针的写法
void  reverse_arr(int arr[], int sz)
{
	int* left = arr;
	int* right = &arr[sz - 1];
	int tmp;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	return;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	reverse_arr(arr,sz);
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}