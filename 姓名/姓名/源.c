#include <stdio.h>

int main()
{
	char ming[20];
	char xing[20];

	printf("请输入你的名：");
	scanf("%s", ming);
	printf("请输入你的姓：");
	scanf("%s", xing);
	printf("名和姓是：%s,%s\n", ming, xing);

	return 0;
}