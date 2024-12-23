#include <stdio.h>
#include <time.h>
#include <unistd.h>  // for sleep()

int main() {
    printf("Press Enter to exit...\n");

    // Get the current time
    while (1) {
        time_t t = time(NULL);

        // Convert the time to a struct tm object
        struct tm *tt = localtime(&t);

        // Print the current time in HH:MM:SS format
        printf("%02d:%02d:%02d\r", tt->tm_hour, tt->tm_min, tt->tm_sec);
        fflush(stdout);  // Ensure the output is flushed immediately
        
        // Sleep for 1 second to avoid flooding the output
        sleep(1);  // Use sleep(1) instead of delay(1000)

        // Check if Enter is pressed to exit
        if (getchar() == '\n') {
            break;  // Exit the loop if Enter is pressed
        }
    }

    printf("\nExiting...\n"); // Print a message before exiting
    return 0;
}
