#include<stdio.h>
int main()
{
    //program to reverse a number in the order entered
    int number,remender;
    printf("enter a number to be reversed:");
    scanf("%d",&number);
    while(number>0)
    {
        remender=number%10;
        printf("%d",remender);
        number=number/10;
    }
    return 0;
}
