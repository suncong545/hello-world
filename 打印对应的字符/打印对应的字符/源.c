#include <stdio.h>

int main()
{
	int i;

    printf("������һ��ASCIIֵ\n");
	scanf("%d", &i);

	if(i>=0 && i <= 127)
	{
		printf("%c\n",i);
	}
	else
	{
		printf("�����ASCII��������������");
        return 0;
	}

}