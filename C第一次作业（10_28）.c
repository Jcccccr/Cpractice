////作业：（10_28）C的第一次作业
////1. 给定两个整形变量的值，将两个值的内容进行交换。
////2. 不允许创建临时变量，交换两个数的内容（附加题）
////3. 求10 个整数中最大值。
////4. 写一个函数返回参数二进制中 1 的个数
////比如： 15       0000 1111       4 个 1
////程序原型：
////int  count_one_bits(unsigned int value)
////{
////	// 返回 1的位数
////}






//1.方法一：
//
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20, c;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//2.方法二：
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20, c;
//	b = a;
//	a = a + b;
//	printf("a=%d,b=%d\n", a, b);
//    return 0;
//}
//

//3.数组
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 11, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int Max=arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>Max)
//		{
//			Max = arr[i];
//		}
//	}
//	printf("%d\n", Max);
//	return 0;
//}


//4.  //這题我以前学(感觉以前学了也白学)的时候没写过 有点没头绪 ，int  count_one_bits(unsigned int value)這个我没看明白 是用这种格式吗  
//然后我在CSDN上看到针对這种程序的方法 有很多，我理解了一下然后自己写了
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num, count = 0;
	scanf("%d", &num);
	while (num)
	{
		num = num&(num - 1);
		count++;
	}
	printf("%d\n", count);
    return 0;
}
//按位“与”法 ：
//整形数据其实以二进制补码存放，假如我输入十进制数15 那么对应的二进制就是0000 1111 
//那么怎么才能达到目的： 计算出有多少个“1”；那么就把0000 1111中每个位上的“1”一一去掉，最后变成0000 0000 十进制对应数字0就行了；
//x=x&(x-1)；使用這个语句循环能够使得0000 1111变为0000 1100到0000 1000到0000 0000 最后15变为0，跳出循环打印循环次数就是“1”的个数。

//21班鞠鑫