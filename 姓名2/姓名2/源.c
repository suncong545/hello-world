#include <stdio.h>
#include <string.h>

int main()
{
	char ming[20];
	char xing[20];
	int kuan;

	printf("请输入你的名：");
	scanf("%s", ming);
	printf("请输入你的姓：");
	scanf("%s", xing);
	printf("名和姓是：\"%20s,%s\"\n", ming, xing);
	printf("名和姓是：\"%s,%-20s\"\n", ming, xing);
	kuan = strlen(xing) + 3;
	printf("名和姓是：\"%*s,%s\"\n", kuan, ming, xing);

	return 0;
}