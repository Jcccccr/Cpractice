#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;         //程序运行有错误
	int i = 1;
	int j = 1;
	int p = 1;
	int sum=0;
	scanf("%d", &n); 
	for (j = 1; j <= n; j++)
	{  
		for (i = 1; i <= j; i++)
		{
			p = p*i;
		}
		sum = sum + p;
	}
	printf("%d\n", sum);
    return 0;
}