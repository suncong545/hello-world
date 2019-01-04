#include <stdio.h>

int main()
{
	float num;

	printf("请输入一个数：");
	scanf("%f", &num);
	printf("打印后的结果是：%.1f\t%.1e\n", num,num);
	printf("请输入一个数：");
	scanf("%f", &num);
	printf("打印后的结果是：%+.3f\t%.3E\n", num,num);


	return 0;
}