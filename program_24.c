#include <stdio.h>
void swapValue(int x, int y) { int t = x; x = y; y = t; }
void swapRef(int *x, int *y) { int t = *x; *x = *y; *y = t; }

int main() {
    int a = 10, b = 20;
    swapValue(a, b);
    printf("By Value: %d, %d\n", a, b); // No change
    swapRef(&a, &b);
    printf("By Reference: %d, %d\n", a, b); // Swapped
    return 0;
}
