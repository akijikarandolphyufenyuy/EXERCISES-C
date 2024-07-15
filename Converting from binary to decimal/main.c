#include <stdio.h>
#include<math.h>
int main()
{
   int binary[100],i,j,sum=0,p,n;
   printf("enter the length of the binary number:");
   scanf("%d",&p);
    printf("enter the binary number to be converted\n");
    for(i=0;i<p;i++)
    {
        scanf("%d",&binary[i]);
    }
    printf("the binary number you entered is:");
    //n=(p-1);
    for(i=0;i<p;i++)
    {
        printf("%d",binary[i]);
    }
    printf("\n");
    for(i=0;i<p;i++)
    {
        sum=sum+(binary[i]*pow(2,n));
        n--;
    }
    printf("the decimal number is:%d",sum);
    */
    return 0;
}
