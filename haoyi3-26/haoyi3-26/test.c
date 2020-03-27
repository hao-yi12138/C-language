#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//void prinf(unsigned int i)
//{
//	if (i > 9)
//	{
//		prinf(i / 10);
//	}
//	printf("%d ", i%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	prinf(num);
//	return 0;
//}
//int Fac(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*Fac(x-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}
//int mystrlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str += 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = mystrlen(arr);
//    printf("%d\n", len);
//	return 0;
//}
//int Fib(int i)
//{
//	int tmp = 1;
//	int x = 1;
//	int y = 1;
//	while (i>2)
//	{
//		tmp = x + y;
//		x = y;
//		y = tmp;
//		i--;
//	}
//	return tmp;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int y = Fib(n);
//	printf("%d", y);
//	return 0;
//}
//unsigned int DigitSum(int i)
//{
//	if (i > 9)
//	{
//		return DigitSum(i / 10)+i%10;
//	}
//	else
//	{ 
//		return i;
//	}
//	  
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret=DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//int pow(int i,int j)
//{
//	if (j >= 1)
//	return pow(i, j - 1)*i;
//	else if (j==0)
//		return 1;
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d",&n,&k);
//	int x = pow(n,k);
//	printf("%d", x);
//	return 0;
//}
void Reverse_string(char *str)
{
	if (*(++str) != '\0')
	{
		Reverse_string(str);
	}
	printf("%c", *(str - 1));
}
int main() {
	char arr[] = "hello world";
	Reverse_string(arr);
	printf("\n");
	return 0;
}