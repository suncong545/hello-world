#include <stdio.h>
#define fz 60

int main()
{
	int time,hour,fengzhong;

	printf("������ʱ�䣺");
	scanf("%d", &time);

	while(time > 0)
	{
		hour = time / fz;
		fengzhong = time % fz;
		printf("ת����Сʱ�ͷ�����%d.%d\n", hour,fengzhong);
		printf("���ٴ�����һ������");
		scanf("%d", &time);
	}

	return 0;
}
