#include <stdio.h>

// Function to generate a rectangle
void drawRectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int width, height;

    // Draw a rectangle
    printf("Enter width and height of the rectangle: ");
    scanf("%d %d", &width, &height);

    printf("\nDrawing Rectangle:\n");
    drawRectangle(width, height);
    
    // Draw a square
    printf("\nEnter the size of the square: ");
    scanf("%d", &width);

    printf("\nDrawing Square:\n");
    drawRectangle(width, width);

    return 0;
}
