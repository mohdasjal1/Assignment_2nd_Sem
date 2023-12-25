#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
int isPrime(int num);
void categorizeNumbers(FILE *inputFile, FILE *evenFile, FILE *oddFile, FILE *primeFile);

int main() {
    FILE *inputFile, *evenFile, *oddFile, *primeFile;

    // Open the input file for reading
    inputFile = fopen("input_numbers.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open output files for writing
    evenFile = fopen("even_numbers.txt", "w");
    oddFile = fopen("odd_numbers.txt", "w");
    primeFile = fopen("prime_numbers.txt", "w");

    if (evenFile == NULL || oddFile == NULL || primeFile == NULL) {
        perror("Error opening output files");
        fclose(inputFile);
        fclose(evenFile);
        fclose(oddFile);
        fclose(primeFile);
        return 1;
    }

    // Categorize and write numbers to separate files
    categorizeNumbers(inputFile, evenFile, oddFile, primeFile);

    // Close the files
    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);
    fclose(primeFile);

    printf("Numbers categorized and written to separate files.\n");

    return 0;
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to categorize numbers and write to separate files
void categorizeNumbers(FILE *inputFile, FILE *evenFile, FILE *oddFile, FILE *primeFile) {
    int num;

    while (fscanf(inputFile, "%d", &num) == 1) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }

        if (isPrime(num)) {
            fprintf(primeFile, "%d\n", num);
        }
    }
}
