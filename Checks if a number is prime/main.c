#include <stdio.h>
int main()
{
    int number,i;
    printf("enter a number:");
    scanf("%d",&number);
    for(i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            printf("number is not prime");
             exit(0);
        }
    }
    printf("number is prime");

    return 0;
}
