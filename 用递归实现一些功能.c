#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//1.接收一个整形值，把它转化为字符并打印它，比如1234，输出1 2 3 4

//void print(int num)
//{
//	if (0 == num)
//		return;
//	else
//		print(num / 10);
//	printf("%d ", num%10);
//}
//
//
//
//int main()
//{
//	print(1234);
//    return 0;
//}


//2.利用递归模拟实现strlen函数（不创建临时变量求字符串的长度）
int my_strlen(char* p)
{
	int count = 0;
	while (*p++ != '\0')    
	{
		count++;
		
	}                             //在這里创建了临时变量  那么我们如果不想创建临时变量该怎么做？
	return count;

}
int main()
{
	char* p = "abcdef";
	int len = 0;
	len = my_strlen(p);
	printf("%d\n", len);
	return 0;
}



