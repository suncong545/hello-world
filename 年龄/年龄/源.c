#include <stdio.h>

int main()
{
	int age;
	float miao = 3.156e7;
	float a;

	printf("请输入年龄： ");
    scanf("%d", &age);
	a = age * miao;
	printf("对应的秒数是%e\n", a);
	return 0;
}