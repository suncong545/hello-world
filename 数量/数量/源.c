#include <stdio.h>

int main()
{
	float zhiliang = 3.0e-23;
	int kua = 950; //һ������950g��
	float shuliang;
	int kuashu;

	printf("������ˮ�Ŀ���ˮ�� ");
    scanf("%d", &kuashu);
	shuliang = kua/zhiliang; //һ�����ж��ٸ�ˮ���ӡ�
	printf("ˮ���ӵ������ǣ�%.2f\n", kuashu * shuliang);
	return 0;
}