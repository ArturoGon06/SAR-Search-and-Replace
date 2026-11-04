#include <stdio.h>
#include <string.h>

int main(void) {
    char path[260];

    printf("Welcome to SAR!\n");

    printf("Please enter the file you wanna edit: \n");
    fgets(path, sizeof(path), stdin);
    path[strcspn(path, "\n")] = '\0';

    FILE *file = fopen(path, "r");

     if (file == NULL) {
        printf("Error: Could not open file.\n");
    } else {
        printf("File opened successfully!\n");
        fclose(file);
    }

    return 0;
}