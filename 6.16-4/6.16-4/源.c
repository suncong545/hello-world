#include<stdio.h>

int main()
{
	int i, j;
	char ch = 'A';

	for(i = 0; i < 6; i++)
	{
		for(j = 0; j <= i; j++, ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}