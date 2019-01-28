#include<stdio.h>

int main()
{
	int i, j;
	int a[8][8];

	for(i = 0; i < 8; i++)
	{
			a[i][0] = 1;
		    a[i][i] = 1;
	}
	for(i = 2; i < 8; i++)
	{
		for(j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for(i = 0; i < 8; i++)
	{
		for(j = 0; j <= i; j++);
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
