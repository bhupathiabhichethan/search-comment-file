/*
SPIRAL MATRIX:
* * * * * * * 
*           *
* * * * *   *
*       *   *
*   * * * * *
*           *
* * * * * * *
*/
#include <stdio.h>
#include "patterns.h"
int main() {
    int n ;
    name(&n); // Size of the matrix (7x7)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print stars for the outer borders
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("* ");
            }
            // Print stars for row 2 (third row)
            else if (i == 2 && j <= 4) {
                printf("* ");
            }
            // Print stars for row 3 (fourth row)
            else if (i == 3 && (j == 4)) {
                printf("* ");
            }
            // Print stars for row 4 (fifth row)
            else if (i == 4 && j >= 2) {
                printf("* ");
            }
            // Print spaces for all other positions
            else {
                printf("  ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
