#include <stdio.h>

int main()
{
	float shengao;
	char name[20];

	printf("������������֣�");
	scanf("%s", name);
    printf("�����������ߣ�");
	scanf("%f", &shengao);
	printf("%s,you are %.3f feet tall", name,shengao);

	return 0;
}