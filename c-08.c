#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>


//斐波那契数列
//1 1 2 3 5 8 13 21 34 55...

//描述第n个斐波那契数
//int count = 0;
//int Fib(int n)
//{
//	if (3 == n)//测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	test(1);
	return 0;
}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
////int Fib(int n)
////{
////	int a = 1;
////	int b = 1;
////	int c = 0;
////	int i = 0;
////	if (n <= 2)
////		return 1;
////	else
////		for(i = 3;i<=n;i++)
////		{
////			c = a + b;
////			a = b;
////			b = c;
////		}
////	return c;
////
////}
//
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	
//	scanf("%d", &n);
//		//先想怎么用这个函数，然后再想怎么去实现，这种想法叫TDD-测试驱动开发
//	ret = Fib(n);
//	printf("%d\n", ret);
//	/*printf("count = %d\n", count);*/
//	return 0;
//}
//int Fac1(int n)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//	}
//	return j;
//}
//
//int Fac2(int n)
//{
//	if (n > 1)
//	{
//		return n * Fac2(n - 1);
//	}
//	else
//		return 1;
//}
//
//
//
//
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	ret = Fac2(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}
/*nt my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}*/

//把大事化小
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//int main()
//{
//	char arr[] = "bit";	
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}
//int my_strlen(char* str)//str是指针变量
//{
//	int count = 0;
//	//计算字符串的长度
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，传参穿过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//
//	return 0;
//}
//#include "add.h"

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}
//void print(int n)//递归的书写
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}
//是素数返回1，不是素数返回0
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));//链式访问
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321  printf返回的是字符的个数 43 2 1
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//
//
//
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}

//int is_prime(int n)
//{
//	//2->n-1
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}

//int is_leap_year(int i)//不要在函数内部打印
//{
//	if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
					//本质上这里是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]) ;//数组传参 在函数内部不能用这种方式求数组个数 这里的数组名仅仅代表着首元素的地址
//	int right = sz - 1;
//	int mid = (right + left) / 2;
//	left = arr[0];
//	
//	while(left<=right)	
//	{
//		int mid = (right + left) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到返回-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr,k,sz);
//	if (-1 == ret)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标为: %d\n", ret);
//	}
//	return 0;
//}

//int is_prime(int n)
//{
//	int m = 0;
//	for (m = 2; m <=sqrt(n); m++)
//	{
//		if (n%m == 0)
//			return 0;
//	}
//	if (m > sqrt(n))
//	{
//		printf("%d ", n);
//		return 1;
//	}	
//}//完美 自己写的
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//打印100-200之间的素数
//	for (i = 100; i <= 200; i++)
//	{	//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//形参-形式参数-形式上的参数 
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}

//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
// 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	Swap2(&a, &b);//调用Swap2函数
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	Swap1(a, b);//调用Swap1函数
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}//无法交换 错误

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	max = get_max(100, 300);
//	printf("%d\n", max);
//	return 0;
//}

//memset
//memory(内存）set（设置）

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//bit\0#########
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度有关
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	//C语言本身提供的函数-库函数
//	return 0;
//}