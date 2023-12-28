#include <stdio.h>

int main()
 {
  int i=1,n;
  printf("Enter the value of n: "); 
  scanf("%d", &n);  
  printf("Numbers from 1 to %d:\n", n); 
  while (i <= n) { 
    printf("%d ", i); 
    i++;
  }
  return 0; 
}
