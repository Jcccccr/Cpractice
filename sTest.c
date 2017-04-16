#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void menu()
{
	printf("***************           SeqList       **************\n");
	printf("***************1. PushBack  2.PushFront **************\n");
	printf("***************3. PopBack   4.PopFront  **************\n");
	printf("***************5. Find      6.Remove    **************\n");
	printf("***************7. RemoveAll 8.Sort      **************\n");
	printf("***************9. BinarySearch  0.EXIT  **************\n");
	printf("***************         10.  Show       **************\n");

}
void Test()
{   
	int input;
	SeqList mylist;
	Init_SeqList(&mylist);

	do{
		menu();
		printf("请输入选项>: ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
		{
				  DataType d;
				  printf("请输入要尾插的数字： ");
				  scanf("%d", &d);
				  PushBack(&mylist, d);
		}
			break;
		case 2:
		{
				  DataType d;
				  printf("请输入要头插的数字： ");
				  scanf("%d", &d);
				  PushFront(&mylist, d);		
		}
			break;
		case 3:
			PopBack(&mylist);
			break;
		case 4:
			PopFront(&mylist);
			break;
		case 5:
		{        
				  DataType d;
				  int ret=0;
				  printf("请输入要查找的数字： ");
				  scanf("%d", &d);
				  ret=Find(&mylist, d);
				  if (-1 == ret)
					  printf("未找到\n");
				  else
					  printf("查找的数字下标为：%d\n", ret);
		}
			break;
		case 6:
		{
				  DataType d;
				  printf("请输入要删除的数字： ");
				  scanf("%d", &d);
				  Remove(&mylist,d);
		}
			break;
		case 7:
			RemoveAll(&mylist);
			break;
		case 8:
			Sort(&mylist);
			break;
		case 9:
		{         DataType d;
		          int ret = 0;
				  printf("请输入要二分查找的数字： ");
				  scanf("%d", &d);
				  ret= BinarySearch(&mylist, d);
				  if (-1 == ret)
					  printf("找不到\n");
				  else
					  printf("找到了，下标是:%d\n", ret);
		}
			
			break;
		case 10:
			Show(&mylist);
			break;
		case 0:
			return;
		default:
			printf("输入有误\n");
			break;
		}
	 } while (input);
}
int main()
{   
	Test();
	return 0;
}