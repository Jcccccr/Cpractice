#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int search_signal(int str[])
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int tmp = 0;
//	for (i = 0; i <= 7; i++)
//	{
//		count = 0;
//		for (j = 0; j <= 7; j++)
//		{
//			if (str[i] == str[j])
//				count++;
//        }
//		if (1 == count)
//			
//	}
//
//
//
//}


int main()
{
	int arr[] = { 1, 2, 3, 1, 2, 3, 4, 5 };       //Ò»°ãÐ´·¨
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i <= 7; i++)
	{
		count = 0;
		for (j = 0; j <= 7; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		if (1 == count)
		printf("%d ", arr[i]);
	}
	return 0;
}