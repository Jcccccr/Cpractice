#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()                             //這里是一个简单的strcpy函数 使用实例
//{
//	/*char arr1[] = "hello juxin";*/
//	char arr2[20];           //注意不完全初始化一个字符串的时候怎么做
//	strcpy(arr2, "hello juxin");
//	printf("%s\n", arr2);
//	return 0;
//}

void my_strcpy(char* p2, char* p1)   //形参是指针，传过来是地址，
{
	while (*p1 != 0)            //注意：只会拷贝\0前面的部分  ‘\0’的ASCII码值是0；
	{
		*p2 = *p1;
		/**p2++ = *p1++;*/      //更加简洁的写法
		*p1++;
		*p2++;
	}
	*p2 = *p1;           //這里是拷贝\0 ，终止整个拷贝过程       
}

int main()
{
	char arr1[] = "hello juxin";
	char arr2[20];
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
    return 0;
}


     //改进写法  (有点问题)
char* my_strcpy(char* p2,  char* p1)
{
	char* ret = p2;
	while (*p1 != 0)            
	{
		*p2++ = *p1++;      
	}
	*p2 = *p1; 
	return ret;
}
int main()
{
	char arr1[] = "hello juxin";
	char arr2[20];
	printf("%s\n", my_strcpy(arr2,arr1));      //调用的该函数返回值是字符串的首元素地址；
	return 0;
}


//int main()
//{
//	char arr[] = "";
//	char* p = arr;
//	if (*p == 0)
//	{                  
//		printf("jjj");               //‘\0’的ASCII值是0；
//	}
//	return 0;
//}

