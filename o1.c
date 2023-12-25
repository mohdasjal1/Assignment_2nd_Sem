#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 10
#define MAX_FIELD_SIZE 20

int main() {
    FILE *file;
    char line[MAX_COLS * MAX_FIELD_SIZE];
    char *token;
    char data[MAX_ROWS][MAX_COLS][MAX_FIELD_SIZE];
    int rows = 0, cols;

    // Open the CSV file for reading
    file = fopen("test.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read each line from the file
    while (fgets(line, sizeof(line), file) != NULL) {
        // Tokenize the line using comma as the delimiter
        token = strtok(line, ",");
        cols = 0;

        // Store each field in the data array
        while (token != NULL && cols < MAX_COLS) {
            strcpy(data[rows][cols], token);
            token = strtok(NULL, ",");
            cols++;
        }

        rows++;
    }

    // Close the file
    fclose(file);

    // Print the data in tabular form
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%-20s", data[i][j]);
        }
        printf("\n");
    }

    return 0;
}
