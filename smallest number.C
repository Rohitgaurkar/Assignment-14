#include<stdio.h>
int main()
{
    int num[10];
    int i,j,swap;
    printf("enter a ten number:");
    for(i=0;i<10;i++)
    {
        scanf("%d", &num[i]);

    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(num[i]>num[j])
            {
               swap=num[i];
                num[i]=num[j];
                num[j]=swap;
            }

        }
    }
        printf(" second smallest number is %d ",num[1]);

    return 0;
}



