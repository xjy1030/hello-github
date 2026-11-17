#include <stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	int total_minute=(hour2*60+minute2)-(hour1*60+minute1);
	printf("%d",total_minute);
	return 0;
}
