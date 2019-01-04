#include <stdio.h>

int main()
{
	int i;

    printf("请输入一个ASCII值\n");
	scanf("%d", &i);

	if(i>=0 && i <= 127)
	{
		printf("%c\n",i);
	}
	else
	{
		printf("输入的ASCII码错误请从新输入");
        return 0;
	}

}