#include <stdio.h>
void Temperature(double x);

int main()
{
	double x; //华氏温度

	printf("请输入一个华氏温度：");
    while(scanf("%lf", &x)==1)
	{
		Temperature (x);

		printf("请输入一个华氏温度:");
	}
	printf("done\n");
	return 0;

}
void Temperature (double x)
{
	const double a = 5.0;
	const double b = 9.0;
	const double c = 32.0;
	const double d = 273.16;
	double n; //摄氏温度
	double i; //开氏温度

	n = a / b * (x - c);
	i = n + d;
	printf("华氏温度是%.2lf\t摄氏温度是%.2lf\t开氏温度是%.2lf\n", x, n, i);
}