#include <stdio.h>

int main() {
    FILE *file;
    const char *filename = "test.txt";

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Use fseek and ftell to find the size of the file
    fseek(file, 0, SEEK_END); // Move the file pointer to the end of the file
    long fileSize = ftell(file); // Get the current position of the file pointer (which is the size of the file)
    
    // Close the file
    fclose(file);

    // Display the file size
    printf("Size of file '%s' is %ld bytes.\n", filename, fileSize);

    return 0;
}
