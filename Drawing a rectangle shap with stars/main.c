#include <stdio.h>
int main()
{
int rows,cols,i,j;
printf("enter the length of the rectangle:");
scanf("%d",&rows);
printf("enter the height of the rectangle:");
scanf("%d",&cols);
printf("\n");
printf("YOUR SHAPE IS:\n");
printf("\n");
for(i=0;i<rows;i++)
{
    for(j=0;j<cols;j++)
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}
