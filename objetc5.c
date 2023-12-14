#include <stdio.h>

void findAndPrint(char *string)
{
    if (*string == '\0')
    {
        printf("No capital letter found in the string.\n");
        return;
    }

    if (*string >= 'A' && *string <= 'Z')
    {
        printf("First capital is %c\n", *string);
        return;
    }

    findAndPrint(string + 1);
}

int main()
{
    char string[500];

    printf("Enter a string : ");
    fgets(string, sizeof(string), stdin);

    findAndPrint(string);

    return 0;
}
