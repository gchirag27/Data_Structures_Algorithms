#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    printf("Enter row and column of matrix 1\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter row and column of matrix 2\n");
    scanf("%d%d",&r2,&c2);
    printf("Enter elements of matrix 1\n");
    int a[r1][c1],b[r2][c2];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of matrix 2\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 1 is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 is\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(r2==c1)
    {
        int c[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<r2;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Matrix after multiplication is\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication is not possible");
    }    
    return 0;
}