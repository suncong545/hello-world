#include <stdio.h>
double butler(double num);

int main()
{
	double num;
	
	printf("������һ��double���͵���:");
	scanf("%lf", &num);
	printf("%.2lf ��������%.2lf \n", num, butler( num));

	return 0;
}
double butler(double num)
{
	  return( num * num *num);
}