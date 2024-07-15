#include <stdio.h>
float CALCO(float num1, float num2, char oper);

int main()
{
    float number1,number2,result;
    char oper;
    printf("enter the first number:");
    scanf("%f",&number1);
    printf("enter the second number:");
    scanf("%f",&number2);
    printf("enter your operator:('+','-','*','/','%'):");
    scanf("%c",&oper);
    result=CALCO(number1,number2,oper);
    printf("the result of %.2f and %.2f is:%..2f\n",number1,number2,result);
    return 0;
}
CALCO(float num1,float num2, char oper)
{
    float ans;
    switch(oper){
case '+':
    ans=num1+num2;
    return ans;
    break;
case '-':
    ans=num1-num2;
    return ans;
    break;
case '*':
    ans=num1*num2;
    return ans;
    break;
case '/':
    ans=num1/num2;
    return ans;
    break;
default:
    printf("invalid operator");
    return 1;
    }
}
