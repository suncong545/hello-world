#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf("This program conmputes moduli.");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &b);
	printf("Now enter the first operand:");
	scanf("%d", &a);

	while(a >0)
	{
		c = a % b;
		printf("%d %% %d is %d\n", a, b, c);
		printf("Enter next number for first operand(<= 0 to quit):");
		scanf("%d", &a);
	}
	printf("done");
    return 0;
}