#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	printf("随机数字:%d\n",rand());
	int hp1 = 100,hp2 = 100;
	int att1,att2;
	while(hp1 >= 0 && hp2 >= 0)
	{
	   att1 = rand()%11 + 5;
	   att2 = rand()%11 + 5;
	   hp2 -= att1;
	   hp1 -= att2;

	   printf("hp1的攻击力%d,hp2的血量是%d\n",att1,hp2);
	   printf("hp2的攻击力%d,hp1的血量是%d\n",att2,hp1);
	
	
	}
	printf("游戏结束，玩家1的血量：%d,玩家2的血量:%d\n",hp1,hp2);
































	/*int i = 1;
	int sum = 0;
	while(i<=100){
	  sum += i;
	  i++;
	  sum += i;
	    printf("和是 %d\n",sum);
	  
	  }*/






	/*int i = 0;
	int password;
	while(i<3)
	{
	  printf("请输入密码：");
	  scanf("%d",&password);
	  if(123456 != password)
	  {
	    printf("密码输入错误，当前输入第%d次\n",i + 1);

	  
	  }
	  if(i == 2)
	  {
	    printf("密码输错三次，强制退出.\n");
		exit(0);

	  
	  }
	   i++;
	}*/






	/*int year = 2015;
	double money = 800;
	while (money <=2000)
	{
	  year++;
	  money *= 1.25;
	
	}
	printf("第%d年到2000亿\n",year);*/




	 








}