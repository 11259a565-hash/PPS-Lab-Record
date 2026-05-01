#include <stdio.h>
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nInside Function (after swap attempt): a = %d, b = %d", x, y);
}

int main() {
    int a, b;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nBefore calling swap function: a = %d, b = %d", a, b);
    swap(a, b);

    printf("\nAfter calling swap function (in main): a = %d, b = %d", a, b);
    printf("\n\nNote: The values in main remain unchanged in Call by Value.");

    return 0;
}
