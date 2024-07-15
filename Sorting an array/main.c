#include <stdio.h>
int main()
{
    int marks[100],i,j,n,temp;
    printf("enter the size of your array:");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    //sorting the array
    for(i=0;i<n;i++)

        {
        for(j=i+1;j<n;j++)
        {
            if(marks[i]>marks[j])
            {
                temp=marks[i];
                marks[i]=marks[j];
                marks[j]=temp;
            }
        }
    }
    printf("the elements in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;
}
