#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num, i, j;
	scanf("%d", &num);
	for (i = 1;i <= num;i++)
	{
		for (j = 1;j <= num;j++)
		{
			if (i == j || i + j == num + 1)
			{
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}