#define _CRT_SECURE_NO_WARNINGS 1
//1. malloc动态开辟一个数组
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int* p = NULL;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	p = (int*)malloc(sizeof(int)*n);
//	if (p == NULL)                    //如果malloc开始失败（就说明没有内存了） 就会返回一个空指针 一旦返回空指针 就要结束程序
//	{
//		printf("内存紧缺");
//		return 0;
//	}
//	for (i = 1; i <=n; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 1; i <=n; i++)
//		printf("%d  ", p[i]);
//	free(p);                         //malloc 和free 成对使用
//	return 0;
//}//



//2.calloc 和free
//其实calloc就相当于malloc开辟了空间之后给开辟的空间赋初值0
//int main()
//{   
//	int i = 0;
//	int* p = NULL;
//	p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("内存不足");
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);          //calloc在堆空间中开辟了空间并且全部赋初值为0
//	}
//	free(p);
//	if (p != NULL)
//	{
//		printf("\n\p的地址依然存在\n");
//	}
//	p = NULL;
//	return 0;
//}

// 由上面的程序可以知道我们在free一个堆中开辟的空间之后 指向哪个空间的指针依然存在
//所以最好在free(p)加上：p=NULL;  避免垂悬指针;



//3.realloc和free   修改一个已经在堆中开辟好的空间（可扩可缩）
//调用形式：void* realloc (void* ptr , size_t  new_size)  (函数返回值是一个符合需求空间的首地址)

//int main()
//{
//	int* p = NULL;
//	p = (int*)malloc(5 * sizeof(int));
//	printf("%p\n", p);
//	p = (int*)realloc(  p , 100 * sizeof(int));
//	printf("%p\n", p);
//	return 0;
//}
//上面的程序基本显示了realloc的用法   但是realloc有很多需要注意的地方 realloc在重新开辟空间的时候有可能是延续原来的空间
//  也有可能是在堆中重新开辟空间   所以一定要注意realloc的返回值是否发生改变

//但是上面的程序存在很多缺陷  我们应该如下写：
int main()
{
	int* p = NULL;
	p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		printf("内存不足");
		return 0;
	}
	int* tmp = (int*)realloc(p, 10 * sizeof(int));   //新建一个零时指针指向新的空间  原因是？
	if (tmp != NULL)
	{
		p = tmp;
	}
	else
	{
		printf("开辟失败");
		return 0;
	}
	free(p);
	p = NULL;         //当free释放p所指向的空间时： 记得把指针置0；防止野指针；
	return 0;
}
//上面新建一个临时指针来存放新开辟的空间是因为如果realloc开辟空间失败 realloc会返回一个空指针 将NULL赋值给p 开辟新空间不成
// 反而把原来的空间的指针置0了；



//4.  一些关于内存管理中容易出错的地方：
//1.不要对空指针解引用

//2.动态内存是在堆上开辟空间的   在栈上开辟空间的就不要用free()

//3.将空指针进行free就不会有什么问题

//4.对于malloc calloc realloc  都需要注意开辟失败或者修改失败的问题 if(p==NULL)判断不可或缺