#include <stdio.h>

int main()
{
    int d,a,b,c;
    printf("Enter the range\n");
    scanf("%d",&d);
    printf("enter the sides a,b & c within range\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>d && b>d && c>d)
        printf("All sides are out of range\n");
    else if(a>d && b>d)
        printf("a & b out of range\n");
    else if(a>d && c>d)
        printf("a & c out of range\n");
    else if(b>d && c>d)
        printf("b & c out of range\n");
    else if(a>d)
        printf("a out of range\n");
    else if(b>d)
        printf("b out of range\n");
    else if(c>d)
        printf("c out of range\n");
    else
    {
        if(a<b+c && b<a+c && c<a+b)
        {
            if(a==b && b==c)
                printf("Equilateral triangle\n");
            else if(a!=b && b!=c && a!=c)
                printf("Scalene triangle\n");
            else
                printf("Isosceles triangle\n");
        }
        else
            printf("triangle not possible\n");
    }
    return 0;
}
