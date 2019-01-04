#include <stdio.h>

void one_three();
void two();

int main()
{
	printf("starting starting now:\n");
	one_three();
	two();
	printf("done!\n");
}
void one_three()
{
	printf("one\n");
}
void two()
{
	printf("two\n");
	printf("three\n");
}