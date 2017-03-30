#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;

}

int main()
{
	int a = 10;
	int b = 20;
	int ret=0;
	ret = add(a, b);
    return 0;
}