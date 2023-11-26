#include<stdio.h>
#define n 10
int main()
{
int a[n],i;
printf(" Enter a number:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\n\n\n reverse no. in array are:\n");
for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);

    return 0;
}
