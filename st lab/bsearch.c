#include <stdio.h>
int bsearch(int x[10],int low,int high,int key)
{
    int mid=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x[mid]==key)
            return mid;
        else if(x[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
    int a[20],n,key,succ,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    if(n!=0)
    {
        printf("Enter the size of array\n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("Enter thre key\n");
        scanf("%d",&key);
        succ=bsearch(a,0,n-1,key);
        if(succ>0)
            printf("Element found at %d",succ);
        else
            printf("Element not found\n");
    }
    else
        printf("enter valid size\n");
    return 0;
}
