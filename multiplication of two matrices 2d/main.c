#include <stdio.h>
int main()
{
    int i,j,mat1[10][10],mat2[10][10],product[10][10],k;
    printf("enter the elements of the first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("the matrix entered is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("enter the elements of the second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("the matrix entered is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    printf("the product of the two matrices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            product[i][j]=0;
            for(k=0;k<3;k++)
            {
                product[i][j]=product[i][j]+ mat1[i][k]*mat2[k][j];
            }

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
