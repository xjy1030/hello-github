#include <stdio.h>

int main()
{
	int price,bill;
	printf("请输入价格:");
	scanf("%d",&price);
	printf("请输入金额：");
	scanf("%d",&bill);
	if(price<bill){
		printf("找您：%d\n",bill-price);
    }else{
	printf("您的钱不够，还差%d\n",price-bill);
}
	return 0;
}
