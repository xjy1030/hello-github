#include <stdio.h>

int main()
{
	double i=2;
	double j=1;
	int N;
	double sum=0;
	scanf("%d",&N);
	int cnt=0;
    while(cnt<N){
    	cnt++;
    	sum+=(i/j);
    	int p=i;
    	i+=j;
    	j=p;
	}
	printf("%.2f",sum);
	return 0;
}
