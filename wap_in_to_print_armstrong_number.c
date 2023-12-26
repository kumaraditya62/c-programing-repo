#include<stdio.h>
#include<conio.h>
void main()
{
    int num,mod,cube,sum=0,temp;
    printf("input a number");
    scanf("%d",&num);
    temp=num;
    for(;num!=0;)
    {
    mod=num%10;
    cube=mod*mod*mod;
    sum=sum+cube;
    num=num/10;
    }
    if(temp==sum)
    {
        printf("ARMSTRONG ");   
    }
    else
    {
        printf("NOT ");
    }
    getch(); 
}