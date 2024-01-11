#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,*ap,*bp;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    ap=&a;
    bp=&b;

    c=a+b;
    d=*ap+*bp;
    printf("\n sum of a & b using variable:%d",c);
    printf("\n sum of a & b using pointer:%d",d);
    getch();
}