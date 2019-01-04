#include <stdio.h>

int main()
{
	double i = 2.54; //一英寸等于2.54厘米。
	float shengao;     //英寸身高。

	printf("请输入身高： ");
	scanf("%f", &shengao);
	printf("换成厘米后的身高是：%.2f", i * shengao);
	return 0;
}