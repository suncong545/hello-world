#include <stdio.h>

int main()
{
	float zhiliang = 3.0e-23;
	int kua = 950; //一夸脱有950g。
	float shuliang;
	int kuashu;

	printf("请输入水的夸脱水： ");
    scanf("%d", &kuashu);
	shuliang = kua/zhiliang; //一夸脱有多少个水分子。
	printf("水分子的数量是；%.2f\n", kuashu * shuliang);
	return 0;
}