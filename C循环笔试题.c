#include<stdio.h>
int main()
{   
	int i = 0;
	int k = 0;
	for (i = 0, k = -1; k = 0; i++, k++) //這里的判断部分居然是一个赋值语句 很容易迷惑；
	{
		printf("hehe\n");
			k++;
	}

	system("pause");
    return 0;
}