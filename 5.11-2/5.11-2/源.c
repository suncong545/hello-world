#include <stdio.h>

int main()
{
	int a;
	int i = 0;

	printf("请输入一个数：");
	scanf("%d", &a);

	while(i++ <= 10)
	{
		
		printf("%d\t",a);
		a++;
		
	}
	return 0;
}