#include <stdio.h>

int main()
{
	int i,flag;
	int x=2;
	int n=0;
	while(n<50){
		flag=1;
	for(i=2;i<x;i++){
		if(x%i==0){
        flag=0;
    }
}
    if(flag==1){
    	printf("%d ",x);
    	n++;
}
		x++;
	}
return 0;
}
