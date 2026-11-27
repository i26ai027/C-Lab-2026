#include <stdio.h>

int main()
{
    int n, i;
    float fact = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + (float)i / fact;
    }

    printf("Sum = %f", sum);

    return 0;
}
