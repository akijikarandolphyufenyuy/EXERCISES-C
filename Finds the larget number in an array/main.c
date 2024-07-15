#include <stdio.h>
int main()
{
    int marks[100],n,i,largest,location=0;
    printf("enter the size of your array:");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("the elements you entered in the array are\n");
    for(i=0;i<n;i++)
    {
     printf("%d\t",marks[i]);

    }
    printf("\n");
   largest=marks[0];
    for(i=1;i<n;i++)
    {
       if(largest<marks[i])
        {
            largest=marks[i];
            location=i;
        }
    }

    printf("the largest mark is:%d and in location:%d",largest,location);
    return 0;
}
