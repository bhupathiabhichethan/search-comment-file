//Write program to swap first and last digit of a number:
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;

    // Find the total number of digits in the number
    digits = (int)log10(num);

    // Find the first digit
    firstDigit = num / (int)pow(10, digits);

    // Remove the first and last digit from the number
    num = num % (int)pow(10, digits);  // Remove the first digit
    num = num / 10;  // Remove the last digit

    // Form the swapped number
    swappedNum = lastDigit * (int)pow(10, digits) + num * 10 + firstDigit;

    // Output the swapped number
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
