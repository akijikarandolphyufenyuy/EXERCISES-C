#include <stdio.h>
int main()
{
    int matrix[3][3]={{1,4,2},{5,3,8},{7,1,2}};
    int i,j,sum=0;
   printf("the matrix is:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\t",matrix[i][j]);
       }
       printf("\n");
   }
   printf("the sum element in rows is:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {

           sum=sum+matrix[i][j];

       }
       printf("%d\t",sum);
      sum=0;
   }

    return 0;
}
