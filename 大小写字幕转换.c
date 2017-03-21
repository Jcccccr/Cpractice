
#include<stdio.h>
int main()
{
	char ch;
	ch=getchar();
	if (ch >= 'a'&&ch <= 'z')   //×Ö·ûÇ§ÍòÒªÓÃ¡®¡¯    Ôø¾­·¸´íÎó
	{  
		printf("%c\n", ch-32 );
	}
	if (ch >= 'A'&&ch <= 'Z')
	{

		printf("%c\n", ch + 32);
	}
	return 0;
}



