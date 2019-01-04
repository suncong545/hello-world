#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//srand(time(NULL));
	//printf("随机数字:%d\n",rand());
	
	int hp1 = 100,hp2 = 100;
	int att1,att2;
	int i = 0;
	while(hp1 >= 0 && hp2 >= 0)
	{
	   att1 = rand()%11 + 5;
	   att2 = rand()%11 + 5;
	   hp2 -= att1;
	   hp1 -= att2;

	   printf("hp1的攻击力%d,hp2的血量是%d\n",att1,hp2);
	   printf("hp2的攻击力%d,hp1的血量是%d\n",att2,hp1);
	   i++;
	
	
	}
	printf("游戏结束，玩家1的血量：%d,玩家2的血量:%d\n",hp1,hp2);
}
