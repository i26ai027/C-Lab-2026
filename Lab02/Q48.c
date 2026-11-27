#include <stdio.h>

int main() {
    int arr1[10], arr2[10], ta4
	mp, i;

    printf("Enter 10 elements for First Array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 elements for Second Array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < 10; i++) {
        tamp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tamp;
    }

    printf("\nAfter Swapping:\nFirst Array: ");
    for (i = 0; i < 10; i++) printf("%d ", arr1[i]);

    printf("\nSecond Array: ");
    for (i = 0; i < 10; i++) printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}
