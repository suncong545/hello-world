#include <stdio.h>
#define fz 60

int main()
{
	int time,hour,fengzhong;

	printf("请输入时间：");
	scanf("%d", &time);

	while(time > 0)
	{
		hour = time / fz;
		fengzhong = time % fz;
		printf("转换成小时和分钟是%d.%d\n", hour,fengzhong);
		printf("请再次输入一个数：");
		scanf("%d", &time);
	}

	return 0;
}
