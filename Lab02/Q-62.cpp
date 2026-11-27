#include <stdio.h>

int prime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num / i; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int num;

    printf("Enter the number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
	

