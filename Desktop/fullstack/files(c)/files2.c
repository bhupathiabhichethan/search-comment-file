#include<stdio.h>
#include<unistd.h>  // for sleep() on Linux/macOS systems

int main() {
    FILE *fp;
    char ch;

    // Open the file in read mode
fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Unable to open source file.\n");
        return 1;  // Exit the program if the file couldn't be opened
    }

    // Read characters from the file one by one until EOF is reached
    while ((ch = fgetc(fp)) != EOF) {//using //fgets()// we read from file charecters:
        putchar(ch);  //  to Print each character we use //putchar//:
        fflush(stdout);  // Force the output to be printed immediately
        sleep(1);  // Sleep for 1 second before printing the next character
    }

    // Close the file
    fclose(fp);
    printf("\nFile reading completed.\n");

    return 0;
}
