#include <stdio.h>

// Function to insert elements into an array
void insert(int x[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
}

// Function to output elements of an array
void output(int x[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d\t", x[i]);
    }
}

// #endif // ARRAY_OPERATIONS_H
