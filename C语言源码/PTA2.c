#include <stdio.h>

int main(void)
{    
    int time1,time2;       
    int total_min,nh,nm;        
    scanf("%d %d",&time1,&time2);        
    total_min=(time1/100)*60+(time1%100)+time2;    
    nh=total_min/60;    
    nm=total_min%60;
    printf("%d%02d\n",nh,nm);    
    return 0;
}
