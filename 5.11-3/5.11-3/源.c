#include <stdio.h>
#define week 7

int main()
{
	int day,zhou,a;

	printf("����������");
	scanf("%d",&day);

	while(day > 0)
	{
		zhou = day / week;
		a = day % week;
		printf("%d days are %d weeks, %d days\n", day, zhou, a );
		printf("���ٴ�����������\n");
		scanf("%d", &day);
	}

	return 0;
}