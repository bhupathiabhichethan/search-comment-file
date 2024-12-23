#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct em {
    int eno;                // Employee number
    char ename[100];        // Employee name
} e;

int main() {
    FILE *fp, *fp1;
    int ch;
    char a;

    do {
        // Display menu
        printf("\n1. Add New Record\n");
        printf("2. List All Records\n");
        printf("3. Search for a Record\n");
        printf("4. Delete a Record\n");
        printf("5. Modify a Record\n");
        printf("6. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &ch);
        getchar(); // Clear newline character from input buffer after scanf

        switch (ch) {
            case 1:
                fp = fopen("emp.txt", "a");  // Open file in append mode
                if (fp == NULL) {
                    printf("Error opening file\n");
                    return 1;
                }
                printf("Enter Employee Number: ");
                scanf("%d", &e.eno);
                getchar(); // Clear newline character after scanf
                printf("Enter Employee Name: ");
                fgets(e.ename, sizeof(e.ename), stdin); // Use fgets for full names
                e.ename[strcspn(e.ename, "\n")] = 0; // Remove newline character from fgets
                fprintf(fp, "%d\t%s\n", e.eno, e.ename); // Write record to file
                fclose(fp);
                printf("Record added.\n");
                break;

            
            case 2:
    fp = fopen("emp.txt", "rt");  // Open file in read mode
    if (fp == NULL) {
        printf("File not found or unable to open.\n");
    } else {
        printf("Employee records:\n");
        while (fscanf(fp, "%d %[^\n]", &e.eno, e.ename) == 2) { // Read entire name
            printf("%d\t%s\n", e.eno, e.ename);
        }
        fclose(fp);
    }
    break;

                break;

            case 3:
                {
                    int num, found = 0;
                    printf("Enter the Employee Number to search: ");
                    scanf("%d", &num);
                    fp = fopen("emp.txt", "r");
                    if (fp == NULL) {
                        printf("File not found\n");
                        return 1;
                    }
                    while (fscanf(fp, "%d %[^\n]", &e.eno, e.ename) == 2) {
                        if (num == e.eno) {
                            printf("Employee details found:\n");
                            printf("Employee Number: %d\nEmployee Name: %s\n", e.eno, e.ename);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Employee with number %d not found.\n", num);
                    }
                    fclose(fp);
                }
                break;

            case 4:
                {
                    int num, found = 0;
                    printf("Enter the Employee Number to delete: ");
                    scanf("%d", &num);

                    fp = fopen("emp.txt", "r");
                    if (fp == NULL) {
                        printf("File not found\n");
                        return 1;
                    }

                    fp1 = fopen("temp.txt", "w");
                    if (fp1 == NULL) {
                        printf("Error opening temporary file\n");
                        fclose(fp);
                        return 1;
                    }

                    while (fscanf(fp, "%d %[^\n]", &e.eno, e.ename) == 2) {
                        if (e.eno == num) {
                            found = 1;  // Record to delete found
                            continue;   // Skip writing this record to temp file
                        }
                        fprintf(fp1, "%d\t%s\n", e.eno, e.ename);
                    }

                    fclose(fp);
                    fclose(fp1);

                    if (found) {
                        remove("emp.txt");       // Delete original file
                        rename("temp.txt", "emp.txt"); // Rename temp to original
                        printf("Record deleted successfully.\n");
                    } else {
                        printf("Employee with number %d not found.\n", num);
                        remove("temp.txt"); // Remove temp file if no deletion
                    }
                }
                break;

            case 5:
                {
                    int num, found = 0;
                    printf("Enter the Employee Number to modify: ");
                    scanf("%d", &num);

                    fp = fopen("emp.txt", "r");
                    if (fp == NULL) {
                        printf("File not found\n");
                        return 1;
                    }

                    fp1 = fopen("temp.txt", "w");
                    if (fp1 == NULL) {
                        printf("Error opening temporary file\n");
                        fclose(fp);
                        return 1;
                    }

                    while (fscanf(fp, "%d %[^\n]", &e.eno, e.ename) == 2) {
                        if (e.eno == num) {
                            found = 1;
                            printf("Enter the new Employee Name: ");
                            getchar(); // Clear newline character
                            fgets(e.ename, sizeof(e.ename), stdin);
                            e.ename[strcspn(e.ename, "\n")] = 0; // Remove newline
                        }
                        fprintf(fp1, "%d\t%s\n", e.eno, e.ename);
                    }

                    fclose(fp);
                    fclose(fp1);

                    if (found) {
                        remove("emp.txt");
                        rename("temp.txt", "emp.txt");
                        printf("Record modified successfully.\n");
                    } else {
                        printf("Employee with number %d not found.\n", num);
                        remove("temp.txt");
                    }
                }
                break;

            case 6:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &a); // No additional getchar needed

    } while (a != 'n');

    return 0;
}
