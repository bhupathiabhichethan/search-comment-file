//upper and lower triangular matrix:
#include<stdio.h>

int main() {
    int i, j;
    int a[100][100];
    int n;

    // Input matrix size
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display the original matrix
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Upper triangular matrix
    printf("Upper triangle is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j) {
                printf("0\t");  // Set values below diagonal to 0
            } else {
                printf("%d\t", a[i][j]);  // Print values on or above diagonal
            }
        }
        printf("\n");
    }

    // Lower triangular matrix
    printf("Lower triangle is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j) {
                printf("0\t");  // Set values above diagonal to 0
            } else {
                printf("%d\t", a[i][j]);  // Print values on or below diagonal
            }
        }
        printf("\n");
    }

    return 0;
}
