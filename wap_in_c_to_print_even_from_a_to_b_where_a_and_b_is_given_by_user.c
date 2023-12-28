#include <stdio.h>
#include<conio.h>
void main() 
{
  int a, b, i; 
  printf("enter the value from a to b: ");
  scanf("%d%d",&a,&b);
  printf("number from %d to %d are : \n"); 
  if(a%2 !=0)
{
    i++;
}
  for(i=a;i<=b;i+=2)
  {
    printf("%d\n",i);
  }
getch();
}