#define _CRT_SECURE_NO_WARNINGS 1
#define MAX(x,y) ((x)>(y)?(x):(y))
int main()
{
	int a;
	int b;
	int Max;
	scanf("%d", &a);
	scanf("%d", &b);
	Max = MAX(a, b);
	printf("%d\n", Max);
    return 0;
}