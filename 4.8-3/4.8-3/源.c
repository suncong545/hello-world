#include <stdio.h>

int main()
{
	float num;

	printf("������һ������");
	scanf("%f", &num);
	printf("��ӡ��Ľ���ǣ�%.1f\t%.1e\n", num,num);
	printf("������һ������");
	scanf("%f", &num);
	printf("��ӡ��Ľ���ǣ�%+.3f\t%.3E\n", num,num);


	return 0;
}