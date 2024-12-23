// #ifndef PATTERNS_H
// #define PATTERNS_H

#include <stdio.h>

// Modify the function to take a pointer so that it can modify the value of n in main
void name(int *n) {
    printf("Enter the value of n: ");
    scanf("%d", n);  // Read the value into the address pointed by n
}

// #endif
