#include <stdio.h>
int main() {
    int n, rev = 0, rem, original;
    printf("Enter integer: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (original == rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
