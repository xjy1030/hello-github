#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a=rand();
	a=a%100; 
	int b;
	int count=0;
	printf("我已经想好这个0-100的整数\n");
	do{
	count++;	
	printf("请输入这个数:\n");
	scanf("%d",&b);
	if(b>a){
		printf("大了\n"); 
	}else if(b<a){
	printf("小了\n"); 
}
		}while(a!=b);
printf("恭喜你，猜对了,用了%d次",count);
	return 0;
}

