#include <stdio.h>
#include <string.h>

int main() {
    char Name[20];
    char Elfish[] = "elf";
//    int found[3] = {0}; 
int f1={0},f2={0},f3={0};

    printf("Enter any name which should contain 'e', 'l', and 'f': ");
    scanf("%s", Name);

    int len = strlen(Name);
   

    int i;
    for (i = 0; i < len; i++) {
        if (Name[i] == 'e') {
            f1= 1;
        } else if (Name[i] == 'l') {
            f2 = 1;
        } else if (Name[i] == 'f') {
            f3 = 1;
        }
    }

    if (f1 && f2 && f3) {
        printf("Your word is considered as ELFISH\n");
    } else {
        printf("Your word is %s\nCondition not met. Missing one or more of 'e', 'l', and 'f'\n",Name);
    }

    return 0;
}