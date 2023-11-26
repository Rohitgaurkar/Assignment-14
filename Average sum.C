#include<stdio.h>
int main()
{
    int num[10], i,sum=0;
    float average;
    printf("enter a ten number");
    for(i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
        sum+=num[i];
    }
    printf("%d ",sum);

    average=sum/100.0;
     printf("total sum is %f",average);
    return 0;
}

