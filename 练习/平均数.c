#include <stdio.h>

int main()
{
	int count=0;
	int number;
	int sum=0;
    do{
    	scanf("%d",&number);
    	if(number!=-1){
		sum+=number;
		count++;
	}
    }while(number!=-1);
    printf("这%d个数的平均数是：%.2f",count,(double)sum/count);
}
