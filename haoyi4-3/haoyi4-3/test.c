#define _CRT_SECURE_NO_WARNINGS 1 
# include<stdio.h>
# include<math.h>
//void print(int * arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int num = 0;
//	int tmp = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		tmp = tmp * 10 + a;
//		num += tmp;
//	}
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int count = 1;
//		int num = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			num += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (num == i)
//		{
//			printf("%d ", i);
//		}
//	}
//     return 0;
//}
int main()
{
	int line= 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1- i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (2 * i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}