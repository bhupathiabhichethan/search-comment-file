#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("file.txt", "w");  // Open file for writing

    if (fp == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    char a[5][10];  // 2D array to store 5 strings of max length 9 (plus null character)
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name[%d]: ", i);
        fgets(a[i], sizeof(a[i]), stdin);  // Use fgets instead of gets for safer input
        fputs(a[i], fp);  // Write the string to the file
    }

    fclose(fp);  // Close the file
    printf("File saved.\n");

    return 0;
}
