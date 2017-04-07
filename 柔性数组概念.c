#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct M
{
	int num;                        //柔性数组是一个大小未知的数组  它被允许成为结构体的最后一个元素  但是之前也必须要有其他元素
	int arr[];                      //struct M（该结构体）的大小不包括柔性数组的大小
}M;
int main()
{
	int i = 0;
	M* m = (M*)malloc(sizeof(int)+100 * sizeof(int));
	m->num = 100;
	for (i = 0; i < m->num; i++)
	{
		m->arr[i] = i;
	}
	for (i = 0; i < m->num; i++)
	{
		printf("%d\n", m->arr[i]);
	}
	return 0;
}

//柔性数组减少了内存开辟的次数  也减少了内存碎片的产生