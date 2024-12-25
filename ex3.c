#include <stdio.h>

int main() {
    FILE *file;
    char input[100];

    printf("Nhap chuoi can them: ");
    fgets(input, sizeof(input), stdin);

    file = fopen("bt01.txt", "a");

    fprintf(file, "%s", input);
    fclose(file);

    return 0;
}

