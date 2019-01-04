#include <stdio.h>
#define week 7

int main()
{
	int day,zhou,a;

	printf("请输天数：");
	scanf("%d",&day);

	while(day > 0)
	{
		zhou = day / week;
		a = day % week;
		printf("%d days are %d weeks, %d days\n", day, zhou, a );
		printf("请再次输入天数：\n");
		scanf("%d", &day);
	}

	return 0;
}