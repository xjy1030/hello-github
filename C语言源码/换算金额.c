 #include <stdio.h>
 
 int main()
 {
 	int one,two,five,x;
 	int flag=0;
 	printf("请输入金额：");
 	scanf("%d",&x);
 	for(one=1;one<x*10;one++){
 		for(two=1;two<x*5;two++){
 			for(five=1;five<x*2;five++){
 				if(one*1+two*5+five*5==x*10){
 					printf("一毛：%d,两毛：%d,五毛：%d\n",one,two,five);
 					flag=1;
				 }
				 if(flag==1) break;
			 }
			 if(flag==1) break;
		 }
		 if(flag==1) break;
	 }
	return 0;
 }
