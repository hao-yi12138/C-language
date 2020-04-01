#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = a^b;
//	int count = 0;
//	while (i)
//	{
//		i = i&(i - 1);
//		++count;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 30; i>=0; i-=2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -=2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	return 0;
}