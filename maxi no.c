 #include<stdio.h>
 int main()
 {
     int a[10],i, max=-1;
     printf("enter a 10 number");
     for(i=0;i<10;i++)
     {
         scanf("%d",&a[i]);
         if(max<a[i])
            max=a[i];


     }
     printf("maximum number is:%d",max);
     return 0;


 }
