#include <stdio.h>

void exchange(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    printf("After exchange:  x = %d, y = %d\n", x, y);
}

int main(void) {
    int x, y;

    printf("Enter values for x and y: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before exchange: x = %d, y = %d\n", x, y);
    exchange(x, y);

    return 0;
}
