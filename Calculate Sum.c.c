#include<stdio.h>
#include<conio.h>
 int main ()
 {
     int n1,n2,s=0;

     printf("Enter rage ");
     scanf("%d%d",&n1,&n2);
     while(n1<=n2)
     {
         s=s+n1;
         n1=n1+1;
     }
     printf("Sum %d",s);
     getch();
     return 0;
 }
