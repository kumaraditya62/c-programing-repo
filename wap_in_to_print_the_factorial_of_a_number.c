#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fact=1,i=1;
    printf("enter any number :");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial =%d\n",fact);
    getch();
}