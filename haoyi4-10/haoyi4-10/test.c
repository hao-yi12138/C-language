#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
//int main()
//{
//	int money = 20;
//	int bottle = money;
//	int empty = money;
//	while (empty / 2 != 0)
//	{
//		bottle += (empty/2);
//		empty = empty / 2 + empty % 2;
//
//	}
//	printf("%d", bottle);
//	return 0;
//}
//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return(count);
//}
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//#include<assert.h>
//char * my_strcpy(char * str1, char * str2)
//{
//	char *ret = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1++ = *str2++);
//	return(ret);
//}
//int main()
//{
//	char arr1[20] = "asdfgh";
//	char arr2[] = "qwertqwe";
//	printf("%s", my_strcpy(arr1, arr2));
//}
//void swap(int arr[], int sz)
//{
//	int i = 0;
//	int y = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz - i - 1; j++)
//		{
//			if (arr[j] % 2 == 0)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (y = 0; y < 10; y++)
//	{
//		printf("%d ", arr[y]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr,sz);
//	return 0;
//}
//越界访问死循环
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}