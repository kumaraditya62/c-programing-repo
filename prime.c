#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,s=0,r1,r2;
    printf("\n enter range start and range end");
    scanf("%d%d",&r1,&r2);
    for(num=r1;num<r2;num++)
    {  s=0;
    for(i=2;i,num/2;i++)
    {
        if(num%i==0)
        {
        s=1;
        break;
        }
        }
        if(s==0)
        printf("\t\t%d",num);
        }
getch();
}