#include <stdio.h>
#include <string.h>

int main()
{
	char ming[10];
	char xing[10];

	printf("�������������");
	scanf("%s", &ming);
	printf("����������գ�");
	scanf("%s", &xing);
	printf("%s %s\n", ming,xing);
	printf("%*d %*d\n",strlen(ming),strlen(ming),strlen(xing),strlen(xing));
	printf("%s %s\n", ming,xing);
	printf("%-*d %-*d\n",strlen(ming),strlen(ming),strlen(xing),strlen(xing));

	return 0;
	
}