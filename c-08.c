#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>


//쳲���������
//1 1 2 3 5 8 13 21 34 55...

//������n��쳲�������
//int count = 0;
//int Fib(int n)
//{
//	if (3 == n)//���Ե�3��쳲��������ļ������
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
//		//������ô�����������Ȼ��������ôȥʵ�֣������뷨��TDD-������������
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
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	ret = Fac2(n);//ѭ���ķ�ʽ
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

//�Ѵ��»�С
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
//int my_strlen(char* str)//str��ָ�����
//{
//	int count = 0;
//	//�����ַ����ĳ���
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
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���δ���ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
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
//void print(int n)//�ݹ����д
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
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}
//����������1��������������0
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));//��ʽ����
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321  printf���ص����ַ��ĸ��� 43 2 1
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

//int is_leap_year(int i)//��Ҫ�ں����ڲ���ӡ
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
//		//�ж�year�Ƿ�Ϊ����
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
					//������������һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]) ;//���鴫�� �ں����ڲ����������ַ�ʽ��������� �����������������������Ԫ�صĵ�ַ
//	int right = sz - 1;
//	int mid = (right + left) / 2;
//	left = arr[0];
//	
//	while(left<=right)	
//	{
//		int mid = (right + left) / 2;//�м�Ԫ�ص��±�
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr,k,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ: %d\n", ret);
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
//}//���� �Լ�д��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//��ӡ100-200֮�������
//	for (i = 100; i <= 200; i++)
//	{	//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//�β�-��ʽ����-��ʽ�ϵĲ��� 
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����
//	*pa = 20;//�����ò���
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
//	Swap2(&a, &b);//����Swap2����
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
//	Swap1(a, b);//����Swap1����
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}//�޷����� ����

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
//memory(�ڴ棩set�����ã�

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
//	//strcpy - string copy - �ַ�������
//	//strlen - string length - �ַ��������й�
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
//	//C���Ա����ṩ�ĺ���-�⺯��
//	return 0;
//}