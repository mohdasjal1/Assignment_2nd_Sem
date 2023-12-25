#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    const char *mergedFile = "mergedFile.txt";

    FILE *source1, *source2, *destination;
    char ch;

    // Open the first source file for reading
    source1 = fopen(file1, "r");
    if (source1 == NULL) {
        perror("Error opening source file 1");
        exit(EXIT_FAILURE);
    }

    // Open the second source file for reading
    source2 = fopen(file2, "r");
    if (source2 == NULL) {
        perror("Error opening source file 2");
        fclose(source1);
        exit(EXIT_FAILURE);
    }

    // Open the destination file for writing
    destination = fopen(mergedFile, "w");
    if (destination == NULL) {
        perror("Error opening destination file");
        fclose(source1);
        fclose(source2);
        exit(EXIT_FAILURE);
    }

    // Copy the contents of the first source file to the destination file
    while ((ch = fgetc(source1)) != EOF) {
        fputc(ch, destination);
    }

    // Copy the contents of the second source file to the destination file
    while ((ch = fgetc(source2)) != EOF) {
        fputc(ch, destination);
    }

    // Close all the files
    fclose(source1);
    fclose(source2);
    fclose(destination);

    printf("Files merged successfully!\n");

    return 0;
}
