//program9
#include <stdio.h>
int main()
{
    int locks,stocks,barrels,tlock,tstock,tbarrel;
    float lprice,sprice,bprice,lsales,ssales,bsales,sales,comm;
    lprice=45.0;
    sprice=30.0;
    bprice=25.0;
    lsales=0;
    ssales=0;
    bsales=0;
    printf("Enter the no of locks\n");
    scanf("%d",&locks);
    while(locks!=-1)
    {
        printf("Enter no of stocks and barrels\n");
        scanf("%d%d",&stocks,&barrels);
        tlock=tlock+locks;
        tstock=tstock+stocks;
        tbarrel=tbarrel+barrels;
        printf("Enter -1 to exit\n");
        scanf("%d",&locks);
    }
    printf("Total locks=%d\n",tlock);
    printf("Total stocks=%d\n",tstock);
    printf("Total barrels=%d\n",tbarrel);
    lsales=lprice*tlock;
    ssales=sprice*tstock;
    bsales=bprice*tbarrel;
    sales=lsales+ssales+bsales;
    printf("Sales=%f\n",sales);
    if(sales>1800)
    {
        comm=1000*0.10;
        comm=comm+(0.15*800);
        comm=comm+(0.20*(sales-1800));
    }
    else if(sales>1000)
    {
        comm=1000*0.10;
        comm=comm+(0.15*(sales-1000));
    }
    else
    {
        comm=sales*0.10;
    }
    printf("Total sales=%f and Commission=%f",sales,comm);
    return 0;
}
