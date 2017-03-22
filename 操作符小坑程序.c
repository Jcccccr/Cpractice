#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	int a = 10;
	short s = 2;
	printf("%d\n", sizeof(s = a + 2));      //sizeof這个东西根本不会考虑它后面的（）里面是什么表达式 它只会关心变量的类型然后瞬间给
	                                      //出空间  然后等到计算的时候整个程序已经结束了，所以不要指望sizeof里面的表达式会执行计算赋值
	printf("%d\n", s);           
	printf("%d\n", a);
	system("pause");
	return 0;
}                       //结果是多少呢？