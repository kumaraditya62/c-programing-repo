#include <stdio.h>
#include<conio.h>
void main() 
{
  int a, b, i; 
  printf("enter the value from a to b: ");
  scanf("%d%d",&a,&b);
  printf("number from %d to %d are : \n");
  for(i=a;i<=b;i++)
  {
    printf("%d\n",i);
  }
getch();
}