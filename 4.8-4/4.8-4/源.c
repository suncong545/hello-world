#include <stdio.h>

int main()
{
	float shengao;
	char name[20];

	printf("请输入你的名字：");
	scanf("%s", name);
    printf("请输入你的身高：");
	scanf("%f", &shengao);
	printf("%s,you are %.3f feet tall", name,shengao);

	return 0;
}