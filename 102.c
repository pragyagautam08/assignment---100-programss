int main()
{
    int n, i;
    float sum = 0, x;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\nEnter %d elements \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
        printf("Average of the entered numbers is =  %.2f", (sum/n));
}
