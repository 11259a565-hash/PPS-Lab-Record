#include <stdio.h>
int main() {
    int arr[10], n, key, found = 0;
    printf("Enter size and elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter key to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { printf("Found at index %d", i); found = 1; break; }
    }
    if (!found) printf("Not found");
    return 0;
}
