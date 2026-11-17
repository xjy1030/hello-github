#include <stdio.h>

int main()
{
	int m,n,i,j;
	int flag=1;
	int sum=0;
	scanf("%d %d",&m,&n);
	int cnt=0;
	if (m==1){
		m=2;
	}
	for(i=m;i<=n;i++){
		flag=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
			if(flag==1){
				cnt++;
				sum=sum+i;
			}
		}
	printf("有%d个素数\n",cnt);
	printf("这些素数的和为%d\n",sum);
	return 0;
}
