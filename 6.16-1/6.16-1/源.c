#include <stdio.h>
#define SIZE 26

int main()
{
	char ch[SIZE];
	int i;

	for(i = 0; i < SIZE; i++)
		ch[i] = 'a' + i;
	for(i = 0; i < SIZE; i++)
	printf("%c", ch[i]);

	return 0;
}