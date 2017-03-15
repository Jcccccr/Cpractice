
//利用C实现5！的运算；
#include<stdio.h>
int main()
{
	int i, t;
	i = 1;
	t = 2;
	while (t<=5)
	{
		i = t*i;
		t = t + 1;
	}
	printf("%d\n", i);
	system("pause");
    return 0;
}