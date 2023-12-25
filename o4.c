#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0; // Flag to track if currently in a word

    // Open the file for reading
    file = fopen("test.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read each character from the file
    while ((ch = fgetc(file)) != EOF) {
        // Increment character count for each character
        charCount++;

        // Check for newline character to count lines
        if (ch == '\n') {
            lineCount++;
        }

        // Check for space, tab, or newline to detect word boundaries
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = 0; // Not in a word
        } else if (inWord == 0) {
            inWord = 1; // Start of a new word
            wordCount++;
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Character count: %d\n", charCount);
    printf("Word count: %d\n", wordCount);
    printf("Line count: %d\n", lineCount);

    return 0;
}
