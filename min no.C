#include<stdio.h>
 int main()
 {
     int a[10]={12,23,45,56,78,94,10,34,98,21};

     int i, min=a[0];
     for(i=0;i<10;i++)
     {
         if(min>a[i])
            min=a[i];


     }
     printf("smallest number is:%d",min);
     return 0;


 }

