#include <stdio.h>

int main()
{
	float i = 64.25;
	
	printf("Enter a floating-point value:%.2f \n", i);
	printf("fixed-point notation:%f\n", i);
	printf("exponential notation:%e\n", i);
	printf("p notation:%a\n", i);
    
	return 0;
}