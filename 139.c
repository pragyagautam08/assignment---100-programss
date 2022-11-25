#include <stdio.h>
int main()
{
 
    float fahrenheit, celsius;
    printf("Enter Temperature Value (in Fahrenheit):\n");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit-32)/1.8;
    printf(" Celsius= %f", celsius);
    return 0;
}
