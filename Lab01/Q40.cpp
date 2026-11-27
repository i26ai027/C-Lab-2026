#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;

    printf("Enter numbers:\n");

    do {
        if (scanf("%d", &num) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (num >= 0) {
            sum += num;
        }
    } while (num >= 0);

    printf("Total sum: %d\n", sum);
    return 0;
}
