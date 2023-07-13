#include<stdio.h>
void quicksort(int x[10],int first,int last)
{
    int temp,i,j,pivot;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        
        while(i<j)
        {
            while(x[i]<=x[pivot] && i<last)
            i++;
            while(x[j]>x[pivot])
            j--;
            if(i<j)
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
            
        }
        temp=x[pivot];
        x[pivot]=x[j];
        x[j]=temp;
        quicksort(x,first,j-1);
        quicksort(x,j+1,last);
    }
}
int main()
{
    int a[20],n,i;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("enter the elements:\n");
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        quicksort(a,0,n-1);
        printf("sorted elements:\n");
        for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    }
    else
    printf("value of n is invalid\n");
}