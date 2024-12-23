//linear search:
#include<stdio.h>
#include "array.h"

int main() {
    int n;
    
    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int array[n];
    
    // Insert elements into the array
    printf("Enter %d elements:\n", n);
    insert(array, n);
    
    // Output the elements of the array
    printf("Array elements are:\n");
    output(array, n);
    int x;
    printf("enter the element to be searched: ");
    scanf("%d",&x);
    int i;
    for(i=0;i<n;i++){
        if(array[i]==x){
            printf("element %d is found at index %d",x,i);
        }
    }
    return 0;
}
