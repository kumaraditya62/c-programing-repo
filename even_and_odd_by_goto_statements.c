#include<stdio.h>
#include<conio.h>
void main()
{int num;
    printf("enter any number");
    scanf("%d",&num);
    if(num%2==0)
    goto even;
    else
    goto odd;

    even:
    printf("%d is even number\n");
    return 0;
    odd:
    printf("%d is odd nunmber\n");
    getch();
}