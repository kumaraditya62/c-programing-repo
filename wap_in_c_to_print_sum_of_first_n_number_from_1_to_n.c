#include <stdio.h>
#include<conio.h>
void main()
 {
  int n, i, sum = 0;
  printf("Enter any number: "); 
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
 { 
    sum = sum + i;
  }
  printf("Sum of the first %d numbers = %d\n", n, sum); 
  getch();
}
