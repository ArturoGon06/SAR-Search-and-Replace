#include <stdio.h>
#include <string.h>

int main(void) {
    int character;
    int index = 0;
    char path[260];
    char text[512];

    printf("Welcome to SAR!\n");

    printf("Please enter the file you wanna edit: \n");
    fgets(path, sizeof(path), stdin);
    path[strcspn(path, "\n")] = '\0';

    FILE *file = fopen(path, "r");

     if (file == NULL) {
        printf("Error: Could not open file.\n");
    } else {
        printf("File opened successfully!\n");
        while (index < 511 && (character = fgetc(file)) != EOF) {
            text[index] = character;
            index++;
        }
        text[index] = '\0';
        printf("%s\n", text);

        fclose(file);
    }

    return 0;
}