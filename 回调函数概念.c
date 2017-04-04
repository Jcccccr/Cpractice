#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void fun1(const  char* str)
{
	printf("fun1:%s\n",str);

}
void fun2(const  char* str)
{
	printf("fun2:%s\n", str);

}

void test(void (*pfun)(const char* str))         //test函数定义中有一个参数：函数指针pfun
{
	pfun("abc");

}
int main()
{
	test(fun1);            //把fun1的的地址传给test
    return 0;
}



