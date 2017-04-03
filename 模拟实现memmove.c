#define _CRT_SECURE_NO_WARNINGS 1

//memmove   内存移动   移动的是字节数（记住 内存里面 基本都是按字节算的）
//memmove( arr+4 , arr+1,4*sizeof(int)（移动四个整形元素，总计16个字节）);  假设int arr[10]={1,2,3,4,5,6,7,8,9,0};
#include<stdio.h>
#include<assert.h>
void* _memmove(void* str1, const void* str2, int count)       
{
	assert(str1);
	assert(str2);
	char* dest = (char*)str1;
	const char* pest = (char*)str2;         
	if (dest > pest)
	{                                    //存在问题   怎样拷贝才能解决问题
		while (count)
		{
			*(dest + count) = *(pest + count);
			count--;
		}
	}
	else
	{
		while (count)
		{
			*dest++ = *pest++;
			count--;
		}
	}
	return str1;
}
int main()
{   
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	_memmove(arr + 3, arr + 1, 4 * sizeof(int));
	for (i = 0; i < 10;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


