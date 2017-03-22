#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int i = 1;
	int p = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		p = p*i;
	}

		printf("%d", p);
       return 0;
}