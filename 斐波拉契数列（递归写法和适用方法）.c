#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//斐波那契数列   
//1。递归实现：

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);        //這样的实现方式效率低下

}
int main()
{
	int n=10;
	int num;
	num=fib(n);
	printf("%d\n", num);
	return 0;
}

//2.循环实现：



int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 10;
	int sum;
	sum = fib(n);
	printf("%d\n", sum);
	return 0;
}
