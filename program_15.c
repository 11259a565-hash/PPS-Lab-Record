#include <stdio.h>
#include <math.h>
int main() {
    int n, original, rem, res = 0;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &n);
    original = n;
    while (original != 0) {
        rem = original % 10;
        res += rem * rem * rem;
        original /= 10;
    }
    if (res == n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
