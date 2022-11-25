#include <stdio.h>
int main() {
  
  int i=1, number = 0;
  printf("Enter a number : ");
  scanf("%d", &number);
  while (i<=20) {
      printf("%d\n",(number*i));
      i++;
  }
  
}
