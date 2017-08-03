#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
void Narry(char(*p)[12], int n)
{
	int i, j;
	//	char *pstr = NULL;
	char t[20];
	for (i = 0; i < n - 1; ++i)
	{
		for (j = 0; j < n - 1 - i; ++j)
		{
			if (strcmp(p[i], p[j + 1]) > 0)
			{
				strcpy(t, p[i]);
				strcpy(p[i], p[j + 1]);
				strcpy(p[j + 1], t);
			}
		}
	}
}
int main()

{
	int i;
	char str[][12] = { "hello", "world", "C language", "programer" };
	Narry(str, 4);
	for (i = 0; i < 4; ++i)
	{
		puts(str[i]);
	}
	return 0;
}