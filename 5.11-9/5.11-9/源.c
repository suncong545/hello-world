#include <stdio.h>
void Temperature(double x);

int main()
{
	double x; //�����¶�

	printf("������һ�������¶ȣ�");
    while(scanf("%lf", &x)==1)
	{
		Temperature (x);

		printf("������һ�������¶�:");
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
	double n; //�����¶�
	double i; //�����¶�

	n = a / b * (x - c);
	i = n + d;
	printf("�����¶���%.2lf\t�����¶���%.2lf\t�����¶���%.2lf\n", x, n, i);
}