#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter the length of the side:");
    int a;
    scanf("%d",&a);
    double area=(sqrt(5*(5+2*sqrt(5)))*pow(a,2))/4.0;
    int perimeter=(5*a);
    printf("Area of the Pentagon = %lf\n",area);
    printf("Perimeter of the Pentagon = %d",perimeter);
}
