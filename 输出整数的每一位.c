#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 
//递归的方式
//void print(int num)
//{  
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}



int main()
{
	int num=123456;        //获取一个整数的每一位 模10除10
	int p;                //获取二进制数的每一位 模2除2；
	scanf("%d", &num);
	while (num)
	{
		p = n % 10;
		n = n / 10;
		printf("%d", p);
	}
	/*print(num);*/
	return 0;
}