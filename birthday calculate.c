#include<stdio.h>
void main()
{

int d1,d2,m1,m2,y1,y2;
for(int i=0;i<40;i++)
{
    printf("--");
}
printf("\t\t\t\tAGE CALCULETION\t\t\t\t\t");
           for(int i=0;i<40;i++)
           {
               printf("--");
           }
printf("\n\t Enter Your Date of Birth :- \n");
printf("\t Date :-");
scanf("%d",&d1);
printf("\t Month :-");
scanf("%d",&m1);
printf("\t Year :-");
scanf("%d",&y1);

printf("\n\t Enter Today Date  :- \n");
printf("\t Date :-");
scanf("%d",&d2);
printf("\t Month :-");
scanf("%d",&m2);
printf("\t Year :-");
scanf("%d",&y2);
if(d1==d2&&m1==m2);
if(d2>=d1)
{
    d2=d1;
}
else{
    m2--;
    d2+=30;
    d2-=d1;
}
if(m2>=m1)
{
    m2-=m1;
}
else{
    y2--;
    m2+=12;
    m2-=m1;
    }
y2-=y1;
if(d1==d2&&m1==m2);
    printf("\n\t present Age :");
    printf("\t%d year\t",y2);
    printf("\t%d Month\t",m2);
     printf("\t%d Date\t",d2);
     m2=11-m2;
     d2=30-d2;

getch();
return 0;
}
