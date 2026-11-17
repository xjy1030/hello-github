#include <stdio.h>
int main(void)

{    
    int cm;    
    int total_inch;        
    scanf("%d",&cm);        
    total_inch=(int)(cm/2.54);
    printf("%d %d\n",total_inch/12,total_inch%12);
    return 0;
}
