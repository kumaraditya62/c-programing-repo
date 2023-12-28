#include <stdio.h>
#include<conio.h>
void main()
 {
  int a,b, i, sum = 0;
  printf("Enter any number: "); 
  scanf("%d%d", &a,&b);
  for (i =a; i <= b; i++)
 { 
    sum = sum + i;
  }
  printf("Sum of number from %d to %d=%d \n",a,b,sum); 
  getch();
}
