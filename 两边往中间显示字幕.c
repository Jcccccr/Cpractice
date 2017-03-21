#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{  
	char arr1[] = "##############";
	char arr2[] = "welcome to bit";
	int left = 0;
	int right = strlen(arr2) - 1;
	printf("%s\n", arr1);
	for (left = 0, right = strlen(arr2) - 1;       //刚开始我粗心写成了if语句 if语句不会循环的 只会执行一次
		                                         //自然也不会打印出字来
		left <= right;
		left++,
		right--)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		Sleep(1000);                   //注意S要大写
		printf("%s\n", arr1);
	}
    return 0;
}