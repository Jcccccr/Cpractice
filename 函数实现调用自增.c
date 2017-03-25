#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Plus(int *num)
{
	(*num)++;

}
int main()
{
	int i = 0;
	Plus(&i);            //思考這里使用的是地址传递而不是值传递；
	Plus(&i);
	Plus(&i);
	Plus(&i);
	printf("%d\n", i);       //Plus函数调用多少次 最后显示多少数字；
	return 0;
}