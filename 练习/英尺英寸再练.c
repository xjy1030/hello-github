#include <stdio.h>

int main()
{
	int cm,total_inch;
	scanf("%d",&cm);
	total_inch=(int)(cm/2.54);
	printf("%d %d\n",total_inch/12,total_inch%12); 
}
