#include<stdio.h>
int main()
{
    int n;
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
    printf("\nReversed array is\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
