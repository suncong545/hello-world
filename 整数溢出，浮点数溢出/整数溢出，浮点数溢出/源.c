#include <stdio.h>

int main()
{
	int i = 2147483647;
	float a = 3.4E38 * 100.0f;
	float b = 0.1234E-10;

	printf("%d,%e,%e\n", i+1, a, b/10);
	return 0;
}