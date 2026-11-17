#include <stdio.h>

int main()
{
	int h1,h2,m1,m2,h,m;
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	h=h2-h1;
	m=m2-m1;
	if(m<0){
		m=m+60;
		h--; 
	}
	printf("Ð¡Ê±£º%d ·ÖÖÓ£º%d",h,m);
	return 0;
}
