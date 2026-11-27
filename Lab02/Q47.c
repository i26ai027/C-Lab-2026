#include <stdio.h>

int main() 
{
    int arr1[10], arr2[10], sum[10], i;

    printf("Enter 10 elements for First Array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 elements for Second Array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 10; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("\nSum of both arrays:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}
