#include <stdio.h>
#include <string.h>

int main()
{
	char ming[20];
	char xing[20];
	int kuan;

	printf("�������������");
	scanf("%s", ming);
	printf("����������գ�");
	scanf("%s", xing);
	printf("�������ǣ�\"%20s,%s\"\n", ming, xing);
	printf("�������ǣ�\"%s,%-20s\"\n", ming, xing);
	kuan = strlen(xing) + 3;
	printf("�������ǣ�\"%*s,%s\"\n", kuan, ming, xing);

	return 0;
}