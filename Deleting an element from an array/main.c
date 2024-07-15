#include <stdio.h>
int main()
{
int array[100],n,i,location;
printf("enter the size of your array:");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}
printf("enter the location of the element you want to delete:");
scanf("%d",&location);
if(location>=n+1)
{
    printf("we can not delete the value wrong index\n");
}
else{
    for(i=location-1;i<n-1;i++)
    {
        array[i]=array[i+1];
    }
    printf("the new set of elements are\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",array[i]);
    }
   }
    return 0;
}
