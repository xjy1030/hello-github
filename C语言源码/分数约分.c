#include <stdio.h>

int main()
{
	int i,j;
	scanf("%d/%d",&i,&j);
	int d;
	int m=i;
	int n=j;
	while(j>0){
	d=i%j;
	i=j;
	j=d;
	}
	printf("%d/%d\n",m/i,n/i);
}
