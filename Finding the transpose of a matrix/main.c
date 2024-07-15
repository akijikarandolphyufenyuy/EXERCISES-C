#include <stdio.h>
int main()
{
    int matrix[10][10],i,j;
    int rows,cols;
    printf("enter the size of the rows:");
    scanf("%d",&rows);
    printf("enter the size of the cols:");
    scanf("%d",&cols);
    printf("enter the elements of your matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
   printf("confirm the matrix you entered\n");
   for(i=0;i<rows;i++)
   {
       for(j=0;j<cols;j++)
       {
           printf("%d\t",matrix[i][j]);
       }
       printf("\n");
   }
   printf("the transpose of the matrix entered is given by\n");
   for(i=0;i<rows;i++)
   {
       for(j=0;j<cols;j++)
       {
           printf("%d\t",matrix[j][i]);
       }
       printf("\n");
   }
    return 0;
}
