#include <stdio.h>

int main(void) {
    double units, amount;

    printf("Enter electricity consumption in units: ");
    if (scanf("%lf", &units) != 1 || units < 0) {
        printf("Invalid unit reading.\n");
        return 1;
    }

    if (units <= 200.0) {
        amount = 0.50 * units;
    } else if (units <= 400.0) {
        amount = 100.0 + 0.65 * (units - 200.0);
    } else if (units <= 600.0) {
        amount = 230.0 + 0.80 * (units - 400.0);
    } else {
        amount = 425.0 + 125.0 * (units - 600.0);
    }

    printf("Amount to be paid: Rs. %.2f\n", amount);
    return 0;
}
