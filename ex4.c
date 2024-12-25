#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("bt01.txt", "r");

    if (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}

