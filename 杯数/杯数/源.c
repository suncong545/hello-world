#include <stdio.h>

int main()
{
	float pintuo;
	float bei;
	float angsi;
	float datang;
	float chashao;

	printf("�����뱭���� ");
	scanf("%f", &bei);
	pintuo = bei / 2;
	printf("Ʒ���ǣ�%.2f\n", pintuo);
	angsi = bei * 8;
	printf("��˾�ǣ�%.2f\n", angsi);
	datang = angsi * 2;
	printf("�������ǣ�%.2f\n", datang);
	chashao = datang * 3;
	printf("�����ǣ�%.2f\n", chashao);
	return 0;
}