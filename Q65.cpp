#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) 
		{
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (isPrime(num)) 
	{
        printf("%d is prime\n", num);
    } else 
	{
        printf("%d is not prime\n", num);
    }

    return 0;
}
