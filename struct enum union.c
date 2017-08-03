#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//class String
//{
//private:
//	char* _str;
//	size_t n;
//public:
//	String()
//	{
//		_str = NULL;
//		n = 0;
//	}
//
//};
//
//int main()
//{
//	cout << sizeof(String) << endl;
//}
int main()
{
	struct test
	{
		char a;
		int num;
		int arr[10];
	};

	typedef enum color
	{
		RED,
		BLUE,
		GREEN,
		G,
		GREjEN,
		GN,
		GRN,
		GREN
	}col;
	printf("%d\n", sizeof(struct test));     //48
	printf("%d\n", sizeof(enum color));      //4  
	printf("%d", sizeof(col));               //4
	return 0;
}