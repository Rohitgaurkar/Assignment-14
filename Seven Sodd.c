#include<stdio.h>
int main()
{
    int num[10], i,Seven=0, Sodd=0;
    printf("enter a ten number");
    for(i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
             if(num[i]%2==0)
                Seven+=num[i];
            else
               Sodd+=num[i];


    }
    printf("total sum of even number is:%d \n",Seven);
    printf("Total sum of odd number is:%d",Sodd);
    return 0;
}

