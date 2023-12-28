#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,p;
    printf("enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
for(j=1;j<=n;j++)
{
    p=i*j;
    printf("%d\t",p);
}
printf("\n");
    }
    getch();
}