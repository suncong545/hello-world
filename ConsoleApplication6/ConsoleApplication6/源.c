#include<stdio.h>
#include<stdlib.h>
int main()
{
   double factshanghai; //ʵ���˺�
   int strength;    //�������
   double maxshanghai = 256;//����˺�
   printf("��������ҵ�ǰ����:  ");
   scanf("%d",&strength);
   factshanghai = maxshanghai *(strength  + 100) / 100;
   printf("����ʵ���˺���:%lf",factshanghai );
    return 0;


}