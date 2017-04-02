#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
char* reverse_string(const char* str)
{
	if (*str == 0)
		return;
	else
		reverse_string(str + 1);
	    printf("%c", *str);
}
int main()
{
	char arr[] = "abcdefgh";
	reverse_string(arr);
    return 0;
}



