#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int my_nquater(int n,int k)
{
	if (k == 0)
		return 1;
	else
		return n*my_nquater(n, k - 1);     //尾递归


}
int main()
{
	int n;
	int k;
	printf("请输入数字和开方次数");
	scanf("%d %d", &n,&k);
	printf("%d\n", my_nquater(n, k));
	return 0;
}