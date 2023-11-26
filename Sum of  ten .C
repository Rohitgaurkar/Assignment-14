#include<stdio.h>
int main()
{
    int num[10], i,sum=0;
    printf("enter a ten number");
    for(i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
        sum+=num[i];
    }

    printf("total sum is%d",sum);
    return 0;
}
