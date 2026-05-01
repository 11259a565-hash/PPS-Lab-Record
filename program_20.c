#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], mult[10][10];
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);
    // Multiplication rule: Columns of A must equal Rows of B
    if (c1 != r2) {
        printf("Error! Multiplication not possible.");
        return 0;
    }
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r1; ++i){
        for (j = 0; j < c1; ++j){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            mult[i][j] = 0;
        }
    }
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            for (k = 0; k < c1; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A * B):\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d  ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
