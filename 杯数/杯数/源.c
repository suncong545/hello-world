#include <stdio.h>

int main()
{
	float pintuo;
	float bei;
	float angsi;
	float datang;
	float chashao;

	printf("请输入杯数： ");
	scanf("%f", &bei);
	pintuo = bei / 2;
	printf("品脱是：%.2f\n", pintuo);
	angsi = bei * 8;
	printf("盎司是：%.2f\n", angsi);
	datang = angsi * 2;
	printf("大汤勺是：%.2f\n", datang);
	chashao = datang * 3;
	printf("茶勺是：%.2f\n", chashao);
	return 0;
}