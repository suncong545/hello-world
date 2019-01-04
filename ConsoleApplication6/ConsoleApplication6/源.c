#include<stdio.h>
#include<stdlib.h>
int main()
{
   double factshanghai; //实际伤害
   int strength;    //玩家力量
   double maxshanghai = 256;//最大伤害
   printf("请输入玩家当前力量:  ");
   scanf("%d",&strength);
   factshanghai = maxshanghai *(strength  + 100) / 100;
   printf("武器实际伤害是:%lf",factshanghai );
    return 0;


}