#include <stdio.h>
int main()
{
    int a[10];
    int i,largest=0, slargest=0;
    printf("enter a 10 number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        if(largest<a[i])
        {
            slargest=largest;
            largest=a[i];
        }
        else if(slargest<a[i])
        {
            slargest=a[i];
        }

    }
    printf("the second largest number is %d ",slargest);

    return 0;
}
