#include <stdio.h>

int main()
{
	int x,i,flag;
    for(x=2;x<=100;x++){
    flag=1;
	for(i=2;i<x;i++){
		if(x%i==0){
        flag=0;
    }
}
    if(flag==1){
    	printf("%d\n",x);
}
	}
return 0;
}
