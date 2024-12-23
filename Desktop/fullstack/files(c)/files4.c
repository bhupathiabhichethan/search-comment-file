#include<stdio.h>
#include<string.h>

int main() {
    FILE *fp;
    char ch[1000];  // Increase buffer size for reading larger lines

    // Open the file in read mode
    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Read lines from the file one by one
    while (fgets(ch, sizeof(ch), fp) != NULL) {
        printf("%s", ch);  // Print the line
        strcmp(ch,"");
    }

    // Close the file
    fclose(fp);
    printf("\nFile reading completed.\n");

    return 0;
}
