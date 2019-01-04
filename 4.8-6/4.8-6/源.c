#include <stdio.h>
#include <string.h>

int main()
{
	char ming[10];
	char xing[10];

	printf("请输入你的名：");
	scanf("%s", &ming);
	printf("请输入你的姓：");
	scanf("%s", &xing);
	printf("%s %s\n", ming,xing);
	printf("%*d %*d\n",strlen(ming),strlen(ming),strlen(xing),strlen(xing));
	printf("%s %s\n", ming,xing);
	printf("%-*d %-*d\n",strlen(ming),strlen(ming),strlen(xing),strlen(xing));

	return 0;
	
}