#include <stdio.h>

void printBinary(int num) {
    if (num > 0) {
        printBinary(num / 2);
        printf("%d", num % 2);
    }
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; 
    }

    printf("Binary equivalent: ");
    
    if (num == 0) {
        printf("0");  
    } else {
        printBinary(num);
    }

    printf("\n");

    return 0;
}
