#include <stdio.h>
#include<conio.h>
void  main() 
{
  int num, i, sum = 0; 
  printf("Enter any number: "); 
  scanf("%d", &num); 
  printf("The factors of %d are:\n", num); 
  for (i = 1; i <= num; i++)
   { 
    if (num % i == 0)
     { 
      printf("%d\n", i); 
      sum += i;
    }
  }
  printf("The sum of all the factors of %d is %d\n", num, sum);
  getch();
}
