#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,*p,*j;
    printf(" enter a and b :");
    scanf("%d%d",&a,&b);

    p=&a;
    j=&b;
    printf("\n Addition a+b=%d",*p+b);
    printf("\n subtraction a-b=%d",*p-b);
    printf("\n product a*b=%d",*p**j);
    printf("\n Division a/b=",*p / *j);
    printf("\n a mod b=%d",*p%*j);
    getch();
}