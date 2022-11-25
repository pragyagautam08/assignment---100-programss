#include<stdio.h>
int main()
{   
 
    float cm, m;
    printf("Enter length in cm: ");
    scanf("%f", &cm);
    m= cm/100;
    printf("Equivalent length in m = %fm", m);
    return 0;
