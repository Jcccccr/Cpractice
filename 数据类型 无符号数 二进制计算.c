#define _CRT_SECURE_NO_WARNINGS 1
//这段程序主要是针对于巩固有关于数据类型的相关计算  
//int char 型数据的取值范围
//主要在于有符号无符号数的计算输入输出  整型提升的概念  原反补的运用


//1.
#include<stdio.h>
//int main()
//{
//    
//	char a = 128;     //-128   ？
//	signed char b = 128;     //-128
//	unsigned char c = 128;         //  128
//	printf("%d %d %d", a, b, c);            //%d的意思是按照有符号整形输出 四字节
//	return 0;
//}




//int main()
//{ 
//	char a = -1;  
//	unsigned char b = -1;
//	printf("%d %d \n", a, b);    //-1  255
//	printf("%u %u \n", a, b);    //42.......  255
//	return 0;
//}



//int main()
//{
//
//
//	char a = 128;
//	char b = -128;
//	printf("%u\n %u\n ", a, b);
//    return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	printf("%u\n", i + j);
//	return 0;
//}


//int main()
//{
//	unsigned i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//
//
//unsigned char i = 0;      //注意這里有 ;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		puts("hello world\n");
//	}
//	return 0;
//}





//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//大小端存储模式：
//大端字节序：00 00 00 01   （16进制）   //           为什么拿16进制来存储？
//小端字节序：01 00 00 00 
//对于整形数据的存储，怎么样才能判断在该编译系统内是大端存储还是小端存储？
//方法：使用字符型指针：

int check(int num)
{
	char* p = (char*)&num;               //整型指针指向开头地址往后数4个字节 字符型指向开头地址就不往后数了（1个字节）
	                                   //所以可以使用字符指针的方式    记得强制类型转换
   if (1 == *p)
	   return 1;
  
   else if (0 == *p)
	   return 0;
}

int main()
{
	int num = 1;
	int i=check(num);
	if (1 == i)
		printf("小端存储\n");
	if (0 == i)
		printf("大端存储\n");
	return 0;
}




