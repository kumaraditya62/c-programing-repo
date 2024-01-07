#include<stdio.h>
#include<conio.h>
void main()
{
    int m;
    printf("\n\t cube :%d",cube(sqr(input())));
}
input()
{
    int k;
    printf(" number ");
    scanf("%d",&k);
    return k;
}
sqr(m)
{
    printf("\t square %d",m*m);
    return m;
}
cube(m)
{
    return m*m*m;
}
