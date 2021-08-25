#include<stdio.h>
int main()
{
    int n,value,pos;
    printf("Enter a value\n");
    scanf("%d",&n);
    int a[n],f[n],i,j,c;
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    printf("Entered array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=c;
        }
    }
    printf("\nFrequency of the elements\n");
    for(i=0;i<n;i++)
    {
        if(f[i]!=0)
        {
            printf("%d has frequency %d\n",a[i],f[i]);
        }
    }
    return 0;
}