#include<stdio.h>
#define SIZE 26
int main()
{
	int i, j;
	char ch[SIZE]; 

	for(i = 0; i < 6; i++)
	{
		ch[6] = 'F';
		for(j = 0; j <= i; j++,ch[6]--)
		{
			printf("%c",ch[6] );
		}
		printf("\n");
	}
	return 0;
}