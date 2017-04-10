#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.普通写法   這里省略



  //這个容易错；
int my_strlen(char* str)
{   
	if (*str != 0)
	{
		str++;
		return 1 + my_strlen(str);
	}
	if (*str == 0)
		return 0;
}
int main()
{
	char arr[10];
	int len;
	printf("请输入字符串：");
	scanf("%s", &arr);
	len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


//strlen通过指针-指针的方式实现：
int my_strlen(char* s)
{
	char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}