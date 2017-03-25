#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_leap(int year)
{
	if ((year % 4 == 0) && (year%100!= 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	printf("ÇëÊäÈëÄê·İ£º");
	scanf("%d", &n);
	printf("%d\n", is_leap(n));
	return 0;
}