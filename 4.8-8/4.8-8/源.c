#include <stdio.h>
#define L 3.785
#define KM 1.609

int main()
{
	float yingli;
	float jialun;
	float gongli;
	float sheng;

	printf("请输入你的里程和消耗的汽油量：");
	scanf("%f %f", &yingli,&jialun);
	printf("消耗每加仑汽油行驶的英里数：%.1f\n", yingli /jialun);

	gongli = yingli * KM;
	sheng = jialun * L;

	printf("转换成升/100公里是：%.1f 升\n", sheng / gongli * 100);

	return 0;
}