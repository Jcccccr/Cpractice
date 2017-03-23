#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int p = 0;
	int sum = 0;
	for (n = 100; n < 1000; n++)
	{
	    sum = 0;
		m = n;              //同样，外循环里的m和内循环里的n不能是同一个变量  之前我都是用的n 后来发现一次循环过后n已经面目全非；
		for (i = 0; i < 3; i++)           //由于是三位数，所以這里循环三次是让每一位的数字进行相乘
		{                                //但是多次错误发现  sum的值在每次判断是不是水仙花数之后需要进行置0，不然会一层一层累加；
			p = m % 10;
			sum = sum + p*p*p;
			m = m / 10;
         }
		if (sum == n)
		{
			printf("%d\n", n);
		}
	}
         return 0;
}