#include <stdio.h>
#include<conio.h>
void main() 
{
  int n, i, f = 1; 
  printf("Enter any number: ");
  scanf("%d",&n); 
  for (i = 1; i <= n; i++) 
  {
    f = f * i; 
  }
  printf("Factorial of numbers from 1 to %d = %d\n", n, f); 
  getch();
}
