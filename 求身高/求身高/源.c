#include <stdio.h>

int main()
{
	double i = 2.54; //һӢ�����2.54���ס�
	float shengao;     //Ӣ����ߡ�

	printf("��������ߣ� ");
	scanf("%f", &shengao);
	printf("�������׺������ǣ�%.2f", i * shengao);
	return 0;
}