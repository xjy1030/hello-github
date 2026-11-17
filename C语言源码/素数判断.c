#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int i;
    int flag=1;
	for(i=2;i<x;i++){
		if(x%i==0){
        flag=0;
    }
}
    if(flag==1){
    	printf("%d是素数",x);
    	}else{
    	printf("%d不是素数",x);
	}
return 0;
}



