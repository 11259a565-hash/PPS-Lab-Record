#include <stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;   // temp gets the value at address x
    *x = *y;     // value at address x is replaced by value at address y
    *y = temp;   // value at address y is replaced by temp
}

int main() {
    int a, b;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nBefore calling swap function: a = %d, b = %d", a, b);
    swap(&a, &b);

    printf("\nAfter calling swap function (in main): a = %d, b = %d", a, b);
    printf("\n\nNote: The original values in main are successfully swapped!");

    return 0;
}
