#include <stdio.h>

int main(void)
{
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	printf("整除结果：%d\n",a/b);
	printf("余数：%d\n",a%b);
	printf("真实商:%.2f\n",(double)a/b);
	
	return 0;
}
