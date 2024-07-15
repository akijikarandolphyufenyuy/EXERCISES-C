#include <stdio.h>
int main()
{
    int i,j,size;
    printf("enter the size of the triangle:");
    scanf("%d",&size);
   for(i=0;i<size;i++)
   {
       for(j=0;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
   printf("\n");
   printf("second style of triangle is:\n");
   for(i=5;i>=0;i--)
   {
       for(j=i;j>=0;j--)
       {
           printf("*");
       }
       printf("\n");
   }
   printf("the third style is:\n");
    for(i=size;i>=0;i--)
   {
       for(j=0;j<i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
