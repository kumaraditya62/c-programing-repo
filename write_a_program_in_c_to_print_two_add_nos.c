#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum;
    printf("enter two number: ");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("The sum of %d and %d is %d\n",num1,num2,sum);
    getch();
}