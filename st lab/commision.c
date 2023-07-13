#include <stdio.h>

int main()
{
    int locks,stocks,barrels,flag=0;
    float sales,comm;
    printf("Enter the value of locks\n");
    scanf("%d",&locks);
    if(locks<=0 || locks>70)
        flag=1;
    printf("Enter the value of stocks\n");
    scanf("%d",&stocks);
    if(stocks<=0 || stocks>80)
        flag=1;
    printf("Enter the value of barells\n");
    scanf("%d",&barrels);
    if(barrels<=0 || barrels>90)
        flag=1;
    if(flag==1)
    {
        printf("Invalid input\n");
        exit(0);
    }
    sales=(locks*45)+(stocks*30)+(barrels*25);
    printf("sales=%f",sales);
    if(sales>1800)
    {
        comm=1000*0.1;
        comm=comm+(0.15*800);
        comm=comm+(0.2*(sales-1800));
    }
    else if(sales>1000)
    {
        comm=1000*0.1;
        comm=comm+(0.15*(sales-1000));
    }
    else
        comm=sales*0.1;
    printf("Commission=%f",comm);
    return 0;
}
