//求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和  a是一个数字 比如2+22+222+2222+22222

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	int a;
	int n;
	int p = 1;
	int i;
	int An = 0;
	int Sn = 0;
	int num;
	scanf("%d", &a);
	scanf("%d", &n);            //不要有'\n'；
	for (i = 0; i < n; i++)
	{
		num = a*p;
		An = An + num;         //在這里求和是需要搞清楚逻辑的 我一开始写了Sn+=Sn+num发现后面越加越累积
		Sn = Sn + An;              //还是需要找到其中累加的原理 
		p = p * 10;
	}
	printf("%d\n", Sn);
    return 0;                 //如果输入 2 5   意思就是2+22+222+2222+22222  结果为：24690
}