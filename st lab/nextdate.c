#include <stdio.h>

int main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d,m,y,nd,nm,ny,ndays;
    printf("Enter the day,month and year\n");
    scanf("%d%d%d",&d,&m,&y);
    ndays=month[m-1];
    if(y<1812 || y>2012)
        printf("Invalid input");
    if(d<=0 || d>31)
        printf("Invalid input");
    if(m<=0 || m>12)
        printf("Invalid input");
    if(m==2)
    {
        if(y%100==0)
        {
            if(y%400==0)
                ndays=29;
        }
        else
        {
            if(y%4==0)
                ndays=29;
        }
    }
    nd=d+1;
    nm=m;
    ny=y;
    if(nd>ndays)
    {
        nd=1;
        nm++;
    }
    if(nm>12)
    {
        nm=1;
        ny++;
    }
    printf("Next Date is %d/%d/%d",nd,nm,ny);
    return 0;
}
