#include<stdio.h>
int main()
{
    int n,value,pos;
    printf("Enter a value\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nPositions available in array\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\nEnter position for the value to be inserted\n");
    scanf("%d",&pos);
    printf("Enter value to be inserted\n");
    scanf("%d",&value);
    int p=pos-1;
    if(p<n)
    {
        int new[n+1];
        for(i=0;i<n+1;i++)
        {
            if(i==p)
            {
                new[i]=value;
            }
            else if(i<p)
            {
                new[i]=a[i];
            }
        }
        for(i=n;i>=p;i--)
        {
            new[i+1]=a[i];
        }
        printf("New array is\n");
        for(i=0;i<n+1;i++)
        {
            printf("%d ",new[i]);
        }
    }
    else
    {
        printf("\nPosition not available\n");
    }
    
    return 0;
}