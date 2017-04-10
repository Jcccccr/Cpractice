#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void fun()
//{
//	int tmp =10;
//	int* p = (int*)(*(&tmp + 1));
//	*(p - 1) = 20;
//}
//int main()
//{
//	int a = 0;                     //在该编译器下会报错
//	fun();
//	printf("a=%d\n", a);             //這里的结果是20；画栈帧图可以很容易得到答案
//	return 0;
//}


int main()
{
	int a = 0;
	char b[5];
	*(int*)(&b + 1) = '1';
	printf("%d\n", a);             //运用栈帧  画图解决
	return 0;
}