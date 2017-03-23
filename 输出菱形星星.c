#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "      *      ";
	printf("%s\n", arr1);
	int left = 0;
	int right = strlen(arr1) - 1;
	int l;
	int r;
	for (l = 5, r = 7; l >= left && r <= right;l--,r++)
	{
		    arr1[r]=arr1[l] = '*';
			printf("%s\n", arr1);
	}
	if (-1 == l)
	{
		for (l = left, r = right; l <= 5 && r >= 7; l++, r--)
		{
			arr1[r] = arr1[l] = ' ';
			printf("%s\n", arr1);
		}
	}
    return 0;
}