#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");

    char firstChar = fgetc(file);
    if (firstChar != EOF) {
        printf("%c\n", firstChar);
    }
    
    fclose(file);
    return 0;
}

