//no of units consumed                    rates in(rs)
//200-500                                   3.50
//100-200                                   2.50
//less than 100                             1.50
#include<stdio.h>
#include<conio.h>
void main()
{
    int initial,final,consummed;
    float total;
    printf("\n initial & final");
    scanf("%d%d",&initial,&final);
    consummed=final-initial;
    if(consummed>=200 && consummed<=500)
    total=consummed*3.50;
    else if(consummed>=100&&consummed<=199)
    total=consummed*2.50;
    else if(consummed<100)
    total=consummed*1.50;
    printf("total bill for %d unit is %f ",consummed,total);
    getch();

}