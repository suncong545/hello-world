#include <stdio.h>

int main()
{
	int count,sum,i;

	count = 0;
	sum = 0;

	printf("�����빤��������");
	scanf("%d", &i);
	while (count++ < i)
		sum = sum + count *count;
     printf("sum = %d\n", sum);

	return 0;
}