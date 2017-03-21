#include<stdio.h>
int main()
{
	double i = 0.0;
	double temp = 1.0;
	double sum = 1.0;
	for (i = 2.0; i <= 100.0; i++)
	{
		temp = (-1)*temp;           //让一个变量来充当符号；
		sum = sum + temp*(1.0 / i);  //i和temp在定义的时候也应该是double类型 
	}
	printf("%lf", sum);
     return 0;
}