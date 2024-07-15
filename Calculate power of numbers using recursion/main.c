#include <stdio.h>
int pow(int num,int po);//where po is the number that squares the number
int main()
{
    int number,result,sq;
    printf("enter a number to get its power:");
    scanf("%d",&number);
    printf("enter the second number:");
    scanf("%d",&sq);
    result=pow(number,sq);
    printf("the number %d raced to the power %d is:%d\n",number,sq,result);
    return 0;
}
pow(int num,int po)
{
    int result=1,i;
    for(i=1;i<=po;i++)
    {
        result=result*num;
        if(po==0)
        {
            result=0;
        }
    }
    return result;

}
