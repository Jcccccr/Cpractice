#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c, temp;
//	scanf("%d%d%d", &a, &b, &c);//  注意scanf（）输入%d后不加\n；在输入的时候记住给空格 不然会出错。
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//    }
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//用函数调用：
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		swap(&a, &b);              //注意取地址
	} 
	if (a > c)
	{
		swap(&a, &c);
	}
	if (b > c)
	{
		swap(&b, &c);
	}
	printf("%d%d%d\n", a, b, c);
	return 0;
}
int swap(int* p1, int* p2)      //使用指针
{
	int temp;
	temp=*p1;
	*p1 = *p2;
	*p2 = temp;
}