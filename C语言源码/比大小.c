#include <stdio.h>

int main()
{
	int a,b,max;
	scanf("%d %d",&a,&b);
	if (a>b){
		max=a; 
		printf("%d\n",max);
	}else{
		max=b;
	}
	printf("大的数是%d",max);
	return 0;
}
