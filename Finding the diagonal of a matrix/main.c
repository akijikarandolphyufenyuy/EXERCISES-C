#include <stdio.h>
int main()
{
    int array[10][10],i,j,cols,rows;
    printf("enter the number of rows of your matrix:");
    scanf("%d",&rows);
    printf("enter the number of columns of the matrix:");
    scanf("%d",&cols);
    printf("enter the elements of your array\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("the matrix entered is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //finding the diagonal of the matrix
    printf("the diagonal of the matrix is : ");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(i==j)
            {
                printf("%d\t",array[i][j]);
            }
        }
    }
    return 0;
}
