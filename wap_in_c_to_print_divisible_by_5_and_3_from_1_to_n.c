#include <stdio.h>
#include<conio.h>
void  main()
 {
  int i, n; 
  printf("Enter the value of n: ");
  scanf("%d", &n); 
  printf("Numbers from 1 to %d that are divisible by 5 and 3 are:\n", n); 
  i = 15; 
  while (i <= n)
   { 
    printf("%d\n", i); 
    i = i + 15; 
  }
 getch();
}
