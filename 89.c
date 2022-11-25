#include<stdio.h>  
 int main()    
{ 
 
int c=56, d=90, temp;      
printf("Before swap c=%d d=%d",c,d);      
temp = c;
c = d;
d = temp;
printf("\nAfter swap c=%d d=%d",c,d);    
return 0;  
} 
