#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,area,peri;
    printf("enter l and b of the regtrangl");
    scanf("%d%d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    printf("area is greater than perimeter");
    printf("\n\n press any key to exit");
    getch();
}