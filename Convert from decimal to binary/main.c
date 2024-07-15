#include <stdio.h>
int main()
{
    int number,rem[100],i=0,j;
    printf("enter a number to be converted:");
    scanf("%d",&number);
    while(number>0)
    {
        rem[i]=number%2;
        number=number/2;
        i++;
    }
    printf("the binary representation is:\n");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",rem[j]);
    }
    return 0;
}
