#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	printf("�������:%d\n",rand());
	int hp1 = 100,hp2 = 100;
	int att1,att2;
	while(hp1 >= 0 && hp2 >= 0)
	{
	   att1 = rand()%11 + 5;
	   att2 = rand()%11 + 5;
	   hp2 -= att1;
	   hp1 -= att2;

	   printf("hp1�Ĺ�����%d,hp2��Ѫ����%d\n",att1,hp2);
	   printf("hp2�Ĺ�����%d,hp1��Ѫ����%d\n",att2,hp1);
	
	
	}
	printf("��Ϸ���������1��Ѫ����%d,���2��Ѫ��:%d\n",hp1,hp2);
































	/*int i = 1;
	int sum = 0;
	while(i<=100){
	  sum += i;
	  i++;
	  sum += i;
	    printf("���� %d\n",sum);
	  
	  }*/






	/*int i = 0;
	int password;
	while(i<3)
	{
	  printf("���������룺");
	  scanf("%d",&password);
	  if(123456 != password)
	  {
	    printf("����������󣬵�ǰ�����%d��\n",i + 1);

	  
	  }
	  if(i == 2)
	  {
	    printf("����������Σ�ǿ���˳�.\n");
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
	printf("��%d�굽2000��\n",year);*/




	 








}