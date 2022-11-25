#include <stdio.h>
int main(){ 
  
int sum= 0;int n;
for(n = 1;n<10;n= n+2)
{
    sum = sum+ n*n;
}
printf("sum = %d\n", sum);
}
