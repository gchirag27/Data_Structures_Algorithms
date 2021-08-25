#include<stdio.h>
#include<string.h>
int main()
{
    int d,i,c=0;
    char a[50]="ABCDE";
    printf("The word is %s\n",a);
    printf("Enter value of d\n");
    scanf("%d",&d);
    int n=strlen(a);
    char temp=a[0];
    while(c<d)
    {
        for(i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        c+=1;
        temp=a[0];
    }
    printf("New word is\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%c ",a[i]);
    }
    return 0;
}