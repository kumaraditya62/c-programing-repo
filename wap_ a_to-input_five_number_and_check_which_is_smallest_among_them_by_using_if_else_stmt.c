#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    printf("input five number");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if((a<b)&&(a<c)&&(a<d)&&(a<e))
    {
        printf("\n a is small");
    }
     else if((b<c)&&(b<d)&&(b<e))
    {
        printf("\n b is small");
    }
    else if((c<d)&&(c<e))
    {
        printf("\n c is small");
    }
    else if(d<e)
    {
        printf("\n d is small");
    }
    else
    {
        printf("\n e is small");
    }
    getch();
}