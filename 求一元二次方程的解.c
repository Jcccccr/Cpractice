#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define EXP  0.000000001
int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	scanf("%lf%lf%lf", &a, &b, &c);
	double delt = b*b - 4 * a*c;
	if ((a >= -EXP) && (a <= EXP))
	{
		printf("这不是一元二次方程\n");
	}
	else                  //這里为什么要用else是为了独立a=0的情况，因为a=0之后后面有的情况依然满足
		                                                //还会继续运行程序；
	{
		if ((delt >= -EXP) && (delt <= EXP))
		{
			printf("有两个相等的根\n");
			printf("x1=x2=%lf\n", -b / (2 * a));
		}
		if (delt > EXP)
		{
			printf("有两个不想等的实根\n");
			printf("x1=%lf,x2=%lf\n", (-b + sqrt(delt)) / (2 * a), (-b - sqrt(delt)) / (2 * a));
		}
		if (delt < -EXP)
		{
			printf("有两个不等的复根\n");
		}
	}
	return 0;
}