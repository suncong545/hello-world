#include <stdio.h>
#define L 3.785
#define KM 1.609

int main()
{
	float yingli;
	float jialun;
	float gongli;
	float sheng;

	printf("�����������̺����ĵ���������");
	scanf("%f %f", &yingli,&jialun);
	printf("����ÿ����������ʻ��Ӣ������%.1f\n", yingli /jialun);

	gongli = yingli * KM;
	sheng = jialun * L;

	printf("ת������/100�����ǣ�%.1f ��\n", sheng / gongli * 100);

	return 0;
}