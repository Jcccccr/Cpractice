#define _CRT_SECURE_NO_WARNINGS 1

//拷贝内容我们之前有了strcpy 但是字符串拷贝函数是有缺陷的  当遇到'\0'时 拷贝就会终止  但是我们想要
//将所有内容包括'\0'也进行拷贝，就需要内存拷贝   memcpy  其中的重点是指针类型的转换
//内存拷贝函数的调用格式为： memcpy( void* dest , const void* src , int count(拷贝字节数));
#include<stdio.h>
#include<assert.h>
void* _memcpy(void* str1, const void* str2, int count)
{    
	assert(str1);
	assert(str2);
	char* temp = (char*)str1;        
	char* dest = (char*)str2;            //思考 這里的char强制类型转换到底与谁有关系 是与count还是被拷贝的那个数组或者字符串？
	while (count != 0)                  //其实我改变强制类型转换的目标类型 改变的其实是循环次数，效率问题
	{
		*temp++ = *dest++;
		count--;
	}
	return str1;                //返回str1的地址
}
int main()
{
	int  arr1[20];
	int  arr2[10] = {1,2,3,4,5,6};
	int i = 0;
	_memcpy(arr1, arr2, 16);               //记住：count就是单纯的字节数 不是拷贝元素数
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", arr1[i]);
	}
    return 0;
}