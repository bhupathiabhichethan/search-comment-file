//to find second largest number:
#include<stdio.h>

int main() {
    int a[100], i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    int big = a[0], secondBig = -1;
    for (i = 1; i < n; i++) {
        if (a[i] > big) {
            secondBig = big;  
            big = a[i];  
        } else if (a[i] > secondBig && a[i] != big) {
            secondBig = a[i];  
        }
    }
    printf("biggest element is %d\n",big);
    if (secondBig == -1) {
        printf("No second largest element found.\n");
    } else {
        printf("Second biggest number is %d\n", secondBig);
    }
    
    return 0;
}
