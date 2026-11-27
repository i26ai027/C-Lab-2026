
#include <stdio.h>

int main(void) {
    double sales, commission;

    printf("Enter sales amount: ");
    if (scanf("%lf", &sales) != 1 || sales < 0) {
        printf("Invalid sales amount.\n");
        return 1;
    }

    if (sales <= 500.0) {
        commission = 0.05 * sales;
    } else if (sales <= 2000.0) {
        commission = 35.0 + 0.10 * (sales - 500.0);
    } else if (sales <= 5000.0) {
        commission = 185.0 + 0.12 * (sales - 2000.0);
    } else {
        commission = 0.125 * sales;
    }

    printf("Commission: Rs. %.2f\n", commission);
    return 0;
}
