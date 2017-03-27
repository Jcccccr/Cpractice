#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//
//
//	/*printf("(are you ok ??)\n");*/
//	/*char a = '\'';
//	printf("%c\n", a);*/
//	char a[] = "jjujjj\"";
//		printf("%s\n", a);
//		/*printf("\\\n");*/
//	char a = '\x090';
//	printf("%c\n",a);
//    return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(int));   //4
//	printf("%d\n", sizeof(long));  //4
//	printf("%d\n", sizeof(long long)); //8
//	printf("%d\n", sizeof(float));    //4    
//	printf("%d\n", sizeof(double));    //8
//	return 0;
//}
 


//#define sz 6    //宏定义的时候這个sz就是一个常量
//int main() 
//{
//	
//   //int num = 0;  
//   //const int a = 14;
//   //printf("%d\n", a);
//   //return 0; 
//	//const  int sz = 10;
//	int arr1[sz] = { 0 };  //错误
//	printf("%d\n", arr1[5]);
//	
//
//}

//enum  Sex
//{
//	male,
//	female,
//	nothing
//};
//int main()
//{
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", nothing);
//
//
//}

//int a = 21;
//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//
//
//	return 0;
//}

//void test()
//{   
//	/*static*/ int num = 0;
//	num++;
//	printf("%d\n", num);
//	
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//
//	return 0;
//}



//int main()
//{
//	int x = 0;
//	int y;
//	scanf("%d", &x);
//	if (x > 0)
//	{  
//		y = 1;
//	}
//	else if (0 == x)
//	{
//		y = 0;
//	}
//	else
//		y = -1;
//	printf("%d\n", y);
//
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr1[] = { 1, 5, 3, 4};
//	int arr2[] = { 5, 6, 6, 7, 8, 9,10 };
//	for (i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
//	{
//		for (j = 0; j < (sizeof(arr2) / sizeof(arr2[0])); j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				printf("有\n");
//				return 0;                    //return 0;的意思是把整个函数结束；在哪个函数里面把哪个函数结束，在main函数里面就把main函数结束
//			}
//			
//		}
//	  }
//	printf("没有\n");
//    return 0;
//}

//
//int main()
//{
//	int* p=NULL;
//	if (p != NULL)
//	{
//		*p = 20;
//		printf("%d\n", *p);
//	}
//    return 0;
//}


//int main()
//{
//	double i = 20.0;
//	double j = i / 3;
//	if (i == 3.0*j)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//
//
//	return 0;
//}

//#define EXP 0.00000001
//int main()
//{
//	double a = 0.0;
//	if ((a > -EXP) && (a < EXP))
//	{
//		printf("%lf", a);
//	}
//    return 0;
//}


//int main()
//{
//	int i;
//	scanf("%d", &i);
//	switch(i)
//	{
//		case 1:
//			
//		case 2: 
//			
//		case 3:
//			
//		case 4:
//			
//		case 5:
//			printf("wekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("monday\n");
//			break;
//		default:
//			printf("fuck u");
//      }
//      return 0;
//}


//
//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//    return 0;
 

//int main()
//{   
//	char arr1[] = "###########";
//	char arr2[] = "hello bit !";
//	int left = 0;
//	int right = strlen(arr1)-1;    //注意字符用strlen
//	printf("%s\n", arr1);
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		left++;
//		right--;
//   }
//   return 0;
//}

//#include<string.h>
//int main()
//{
//	int i = 0;
//	char arr1[] = "abcdef";
//	char arr2[10];                                                 //Q：：我定义一个数组放10个字符 如果我输入不到10个字符那么是什么情况
//	for (i = 0; i < 3; i++)
//	{
//		printf("please enter the passwords:");
//		scanf("%s", arr2);
//		if (strcmp(arr2, arr1) == 0)
//		{
//			printf("entering");
//			break;
//		}
//    }
//	if (i == 3)
//	printf("u r wrong");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int p = 1;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		p = p*i;
//	}
//	printf("%d\n", p);
//    return 0;
//}


//int main()
//{
//	int i = 1;
//	int j = 1;
//	int p = 1;
//	int n ;
//	int sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		 p = 1;                                //注意這一句；
//         for (i = 1; i <=j; i++)
//		 {
//			p = p*i;			
//		}
//		sum = sum + p;
//	}
//	printf("%d\n", sum);
//    return 0;


//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 8;
//	int left = 0;
//	int mid;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	while (left <= right)
//	{
//	    mid = (left + right) / 2;
//		if (arr1[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//    }
//	if (left <= right)
//		printf("找到了\n");
//	else
//		printf("没找到\n");
//    return 0;
//}


//int main()
//{
//	
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	while (n != 0)
//	{
//		n=n&(n - 1);
//		count++;
//     }
//	printf("%d\n", count);
//    return 0;
//}

//int main()
//{
//	int n;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		i = n % 2;
//		n = n / 2;
//		if (1==i)            //注意這里的判断  第一次又写错了
//		{
//			count++;
//		}
//    }
//	printf("%d\n", count);
//    return 0;
//}

//int main()
//{
//	int i, j, k;
//	int a = 3;
//	int b = 4;
//	i=a&b;
//	j = a | b;
//	k = a^b;
//	printf("%d\n", i);
//	printf("%d\n", j);
//	printf("%d\n", k);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//    return 0;
//}

//int main()
//{
//	int i = 1;
//	int p=i++;
//	printf("%d\n", i);
//	printf("%d\n", p);
//	return 0;
//}

//int main()
//{   
//	int num = 10;
//	num << 1;                //我们可以认为這个式子放在這里没有任何意义num依然是原来的值
//	int p = num << 1;
//	printf("%d\n", num);
//	printf("%d\n", p);
//	return 0;
//}

//int main()
//{
//	int a;
//	a = sizeof(int);
//	printf("%d\n", a);
//    return 0;
//}



//void test(char a[])
//{
//	printf("%d\n", sizeof(a));
//
//}

//
//int main()
//{
//	/*int arr1[10] = { 0 };*/
//	/*printf("%d\n", sizeof(arr1));*/
//	/*test(arr1);*/
//	char arr2[10] = { 'a' };
//	/*printf("%d\n", sizeof(arr2));*/
//	test(arr2);                                       //为啥这里输出是4？
//    return 0;
//}


//int bin_search(int arr1[], int sz, int key)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//		if (arr1[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	
//		return 0;
//}
//
//int main()
//{                                                            //函数实现折半查找   有问题
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int key = 7;
//	int p=bin_search(arr1, sz, key);
//	if (1 == p)
//	{
//		printf("找到了\n");
//	}
//	else if (0 == p)
//	{
//		printf("没找到\n");
//	}
//    return 0;
//

int main()
{
	int num = 20;
    printf("%p\n", num);  
    return 0;
}




