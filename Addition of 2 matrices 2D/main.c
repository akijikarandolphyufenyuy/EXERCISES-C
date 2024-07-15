#include <stdio.h>
int main()
{
    int i,j,a,b,c,d;
    int mat1[10][10],mat2[10][10],sum[10][10];
    printf("enter the size or the rows of the first matrix:");
    scanf("%d",&a);
    printf("enter the size of the columns of the first matrix:");
    scanf("%d",&b);
    printf("enter the size of the rows of the second matrix:");
    scanf("%d",&c);
    printf("enter the size of the columns of the second matrix:");
    scanf("%d",&d);
    if(a==b &&  b==c && a==c)
    {
        printf("enter the elements of the first matrix:\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\n");
        printf("the first matrix you entered is:\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("%d\t",mat1[i][j]);
            }
            printf("\n");
        }
        printf("enter the elements of the second matrix:\n");
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("\n");
        printf("the second matrix you entered is:\n");
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                printf("%d\t",mat2[i][j]);
            }
            printf("\n");
        }
        printf("the sum of the two matrix is:");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                sum[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        printf("\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("only square matrices can be added\n");
    }
    return 0;
}
