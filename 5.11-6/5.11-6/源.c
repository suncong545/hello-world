#include <stdio.h>

int main()
{
	int count,sum,i;

	count = 0;
	sum = 0;

	printf("请输入工作天数：");
	scanf("%d", &i);
	while (count++ < i)
		sum = sum + count *count;
     printf("sum = %d\n", sum);

	return 0;
}