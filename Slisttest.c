#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"
void test()
{
	pList plist;
	Init_slist(&plist);
	PushBack(&plist,1);
	PushBack(&plist, 2);
	PushBack(&plist, 3); 
	PushBack(&plist, 4);
	PushBack(&plist, 5);
	Print(plist);
	PopBack(&plist);
	Print(plist);
	PushFront(&plist, 6);
	Print(plist);
	Remove(&plist, 3);
	Print(plist);
	PopFront(&plist);
	Print(plist);
	Getslistlength(plist);
	Print(plist);
	Find(plist, 2);
	printf("%p\n", Find(plist, 2));  
	Destoryslist(&plist);
	
}
int main()
{
 	test();
	return 0;

}