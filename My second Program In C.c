#include<stdio.h>
void main ()
{
    char name [20];
    printf ("enter your name");
    scanf ("%[^\n]", &name);
    printf ("Hello %s", name);
    getch ();



}
