#include <stdio.h>

int main()
{
	float sudu;
	float daxiao;
	float time;

	printf("�����������ٶȣ�");
	scanf("%f", &sudu);
	printf("�������ļ���С��");
	scanf("%f", &daxiao);
	time = daxiao / sudu;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", sudu,daxiao);
	printf("downloads in %.2f seconds\n", time);

	return 0;
}