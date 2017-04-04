#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void qsort(void *base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void *elem1, const void *elem2)
//	)
//{
//
//}



//1. 整形数组用qsort进行排序用例

//int cmp_int(const void *elem1, const void *elem2)        //注意：空类型指针是没办法加减操作以及解引用的
//{
//	return (*(int*)elem1) - (*((int*)elem2));            //這里为什么要用正负来判断元素先后顺序，使用int*强制类型转换的原因仅仅是因为函数返回值是int吗？
//}                                                        
//int main()
//{    
//	int arr[] = { 3, 2, 1, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(int), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//    return 0;
//}


////2.字符数组使用qsort进行排序用例
//int cmp_char(const void *elem1, const void *elem2)
//{
//	return (*(char*)elem1) - (*((char*)elem2));            //這里为什么要用正负来判断元素先后顺序，
//}                                                      //由此可以知道  這个函数返回的仅仅就是正数负数，为了达到要求 
//                                                      //强制类型转换的时候要依据main函数中的数组元素类型而定 
//int main()
//{
//	char arr[] = { 'A','B','C','E','D' };
//	int sz = 5;
//	int i = 0;
//	qsort(arr, sz, sizeof(char), cmp_char);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}




//3.结构体对象使用qsort进行排序用例          //写的不是很顺利


typedef struct Stu          //如果没有typedef类型重定义标识符的话，后面定义的对象貌似会报错
{
	char name[10];
	int num;
	int score;
}Stu;

int cmp_stu(const void *elem1, const void *elem2)
{
	return strcmp((*(Stu*)elem1).name, (*(Stu*)elem2).name);
}

int main()
{
    Stu stu[3] = { { "zhang", 7, 66 },
              { "li", 10, 70 },
              { "wang", 12, 90 } };
  
	int i = 0;
	int sz = sizeof(stu) / sizeof(stu[0]);
	qsort(stu, sz, sizeof(Stu), cmp_stu);               //注意這里的sizeof（）括号中的是类型 对于结构体来说类型就是Stu；
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", stu[i].name);                    //注意這里是对象中的名字进行排序；
	}
    return 0;
}