#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,p;
    printf("enter any number: ");
    scanf("%d%d",&a,&b);
    printf("multiplication of number from %d to %d:\n",a,b);
    for(i=a;i<=b;i++)
    {
        for(j=a;j<=b;j++)
        {
            p=i*j;
            printf("%d\t",p);
        }
        printf("\n");
    }
    getch();
}