#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//srand(time(NULL));
	//printf("�������:%d\n",rand());
	
	int hp1 = 100,hp2 = 100;
	int att1,att2;
	int i = 0;
	while(hp1 >= 0 && hp2 >= 0)
	{
	   att1 = rand()%11 + 5;
	   att2 = rand()%11 + 5;
	   hp2 -= att1;
	   hp1 -= att2;

	   printf("hp1�Ĺ�����%d,hp2��Ѫ����%d\n",att1,hp2);
	   printf("hp2�Ĺ�����%d,hp1��Ѫ����%d\n",att2,hp1);
	   i++;
	
	
	}
	printf("��Ϸ���������1��Ѫ����%d,���2��Ѫ��:%d\n",hp1,hp2);
}
