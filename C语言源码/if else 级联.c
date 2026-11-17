#include <stdio.h>

int main()
{
	int f,x;
	scanf("%d",&x);
	if(x<0){
		f=-1;
}else if(x==0){
	f=0;
}else{
	f=x*2;
}
printf("%d\n",f);
return 0;
}


