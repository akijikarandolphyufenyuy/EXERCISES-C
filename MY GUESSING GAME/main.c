#include <stdio.h>
int main()
{
   int guess,random,n;

   do{
        random=0;
   // srand(time(0));
   random=rand()%10;
   printf("enter a number you of your choice:");
   scanf("%d",&guess);
   if(guess==random)
   {
       printf("you guess is correct random is:%d\n",random);
   }
   else{
    printf("wrong guess random is:%d\n",random);
   }
   }while(guess!=random);

    return 0;
}
