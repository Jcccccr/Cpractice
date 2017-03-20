#include<stdio.h>
int main()
{
	int arr1[] = { 1, 1, 1, 1, 1 };
	int arr2[] = { 0, 0, 0, 0, 0 };//我们应当对数组的初始化了解透彻   如果我们不初始化   arr1[];這样的格式就千万不能出现；
	int i = 0, t;
	for (i = 0; i < 4; i++)
	{
		t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
		printf("%d", arr1[i]);  //注意一些数组的最基本的东西  比如数组其实在调用的时候是取地址的，而且数组与数组之间是没有办法赋值的
	}
	system("pause");
	return 0;


}