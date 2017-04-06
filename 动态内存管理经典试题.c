#define _CRT_SECURE_NO_WARNINGS 1

//一题：  注意点：形参只是实参的一份临时拷贝（传值）  形参的值的改变并不能改变实参的值
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void GetMemory(char* p)             //形参
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);                 //实参
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{   
//	Test();
//	return 0;
//}
//  程序在這里挂掉了：  這个程序有几个错误的地方：1.GetMemory函数中缺少了free
                                            //2.p只是指针str的临时拷贝 p有了地址但是并不能够改变str的值 而str指针是一个空指针 没法给字符串



//针对于上述问题该如何改进：  1.传值改为传址
//void GetMemory(char** p)            //改为二级指针    
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);                 //二级指针常量          
//	strcpy(str, "hello world\n");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//2.使用返回值 带回一个地址 
//char* GetMemory(char* p)             
//{
//	p = (char*)malloc(100);
//	return p;
//}                                        //注意：虽然這个函数调用完成之后函数所占的（栈）空间会被销毁但是p的值指向的（堆）
//void Test(void)                                                                        //空间里面被开辟的空间依然存在
//{
//	char* str = NULL;
//	str=GetMemory(str);                 
//	strcpy(str, "hello world\n");
//	printf(str);
//}
//int main()
//{   
//	Test();
//	return 0;
//}




//二题：关于函数调用的栈空间的概念：

//调完即毁
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;                           //栈空间里面的函数被调用完成之后空间就会还给操作系统  “hello world”字符串不复存在
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();               //就算传回来一个地址，也找不到了那个“hello world”； 
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}




//三题：没啥毛病   但是没有free 存在内存泄漏
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}                                        // 内存泄漏
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello\n");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//四题：   垂悬指针

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);                     //其实這里有一个很危险的行为
//	if (str != NULL)                //這里说明在释放堆空间的时候指向堆空间的那个指针依然保持指向 
//	{
//		strcpy(str, "world\n");
//		printf(str);
//	}
//	return 0;
//}
//int main()
//{
//	Test();
//	return 0;
//}


void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;                                  //记住：在free 之后将指针置空
	if (str != NULL)                
	{
		strcpy(str, "world\n");
		printf(str);
	}
	return 0;
}
int main()
{
	Test();
	return 0;
}

