#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter any number");
    scanf("%d",&num);
    if(num>0)
    goto positive;
    else
    goto negative;

    positive:
    printf("number is positive");
    return;
    negative:
    printf("munber is negative");
    return;

    getch();
}