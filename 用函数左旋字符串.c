#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数，可以左旋字符串中的k个字符；
//ABCD左旋一个字符得到BCDA  左旋两个字符得到CDBA
#include<stdio.h>
#include<string.h>

char* left_move(char* arr, int sz, int k)
{
	int i = 0;
	int j = 0;
	char tmp;
	for (i = 0; i < k; i++)
	{   
		tmp = arr[0];
		for (j = 0; j < sz - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[sz - 1] = tmp;
	}
}

int main()
{
	char arr[] = "ABCDEFG";
	int sz = strlen(arr);
	int k;
	printf("请输入移动的个数");
	scanf("%d", &k);
	left_move(arr, sz, k);
	printf("%s\n", arr);
	return 0;
}
