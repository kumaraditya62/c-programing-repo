#include<stdio.h>
#include<conio.h>
void main()
{
    float bp,da,hra,grpay;
    printf("\nEnter basic salary of ramesh:");
    scanf("%f",&bp);
    da=0.4;
    hra=0.2;
    grpay=bp+da+hra;
    printf("Basic salary of ramesh=%f\n",bp);
    printf("Deamess allowance=%f\n",da);
    printf("House rent allowance=%f\n",hra);
    printf("Gross pay of ramesh is %f\n",grpay);
    getch();
}