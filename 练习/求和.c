#include <stdio.h>

int main()
{
	int x;
	double sum=0.0;
	int n;
	int sign=1;
	scanf("%d",&x);
	for(n=1;n<=x;n++){
        sign=-sign;
		sum=sum+sign*1.0/n;
	}
	printf("%f",sum);
	return 0;
}
