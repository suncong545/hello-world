#include <stdio.h>
double butler(double num);

int main()
{
	double num;
	
	printf("请输入一个double类型的数:");
	scanf("%lf", &num);
	printf("%.2lf 的立方是%.2lf \n", num, butler( num));

	return 0;
}
double butler(double num)
{
	  return( num * num *num);
}