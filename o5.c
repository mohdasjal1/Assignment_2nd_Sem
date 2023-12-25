#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    long fileSize;

    // Open the input file for reading
    inputFile = fopen("test.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    // Get the size of the file
    fseek(inputFile, 0, SEEK_END);
    fileSize = ftell(inputFile);
    fseek(inputFile, 0, SEEK_SET);

    // Use a fixed-size buffer to reverse the content
    char buffer[fileSize];

    // Read the entire file into the buffer
    fread(buffer, 1, fileSize, inputFile);

    // Write the buffer in reverse order to the output file
    for (long i = fileSize - 1; i >= 0; i--) {
        fputc(buffer[i], outputFile);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("File contents reversed successfully.\n");

    return 0;
}
