#include <stdio.h>
#define feet 30.48
#define inches 2.54

int main()
{
	float centimeters,yingcun,a;
	int yingchi;

	printf("Enter a height in centimeters:");
	scanf("%f", &centimeters);

	while(centimeters > 0)
	{
		yingchi = centimeters / feet;
		a = centimeters - (yingchi * feet);
		yingcun = a / inches;
		printf("%.1f cm = %d feet, %.1f inches\n", centimeters, yingchi, yingcun);
        printf("Enter a height in centimeters(<=0 to quit):\n");
		scanf("%f", &centimeters );
	}
	printf("bye\n");
	return 0;
}