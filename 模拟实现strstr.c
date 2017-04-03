#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现strstr函数（寻找子串）
//我的解法
#include<stdio.h>
#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{   
//	assert(str1);
//	assert(str2);    //地址不为空
//	char* dest = NULL;
//	char* temp = NULL;
//	dest = str2;
//	temp = str1;
//	while (*str1 != '\0')
//	{
//
//		while (*str2 != '\0')
//		{
//			if (*str1 == *str2)
//			{
//				str1++;
//				str2++;
//			}
//			else
//				break;
//		}
//		if (*str2 == '\0')
//			return temp;
//			str2 = dest;
//		temp =temp+1;
//		str1 = temp;
//	}
//	return NULL;
//}



//鹏哥解法  稍微简洁一点
char* my_strstr(const char *str, const char* substr)
{
	assert(str);
	assert(substr);
	char* str1 = NULL;
	char* str2 = NULL;
	char* start = str;

	while (*start)
	{
        str1 = start;
		str2 = substr;
		while ((*str1) && (*str2) && (*str1 == *str2))
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return start;
		}
		start++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "fe";
	char* tip=my_strstr(arr1, arr2);
	if (tip != NULL)
		printf("%p\n", tip);
	else
		printf("未找到\n");
    return 0;
}