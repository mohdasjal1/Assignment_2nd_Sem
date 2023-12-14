#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void printTable(int num) {
    printf("Table of %d:\n", num);
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Factorial\n");
        printf("2. Table\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:                
                {
                    int num;
                    printf("Enter a number to calculate factorial: ");
                    scanf("%d", &num);
                    int result = factorial(num);
                    printf("Factorial of %d is: %d\n", num, result);
                }
                break;

            case 2:
                {
                    int num;
                    printf("Enter a number to generate the table: ");
                    scanf("%d", &num);
                    printTable(num);
                }
                break;

            case 3:
                // Exit
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}

