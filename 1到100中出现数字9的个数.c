#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i <= 100; i++)
	{
		if (9 == i % 10)    //模10就能看到个位数的数字是多少
			count++;
		if (9 == i / 10)     //注意还有个90
			count++;
	}
	printf("%d\n", count);
    return 0;
}