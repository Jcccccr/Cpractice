#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Reserve_arr(int str[])                      //不带指针的写法   
{
	int i = 0;            
	int tmp;
	for (i = 0; i < 5; i++)
	{
		tmp = str[i];
		str[i] = str[9 - i];
		str[9 - i] = tmp;
	}
	
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int i = 0;
	Reserve_arr(arr);
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}