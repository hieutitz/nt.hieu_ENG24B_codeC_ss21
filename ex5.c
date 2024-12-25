#include <stdio.h>

int main() {
    FILE *file;
    int soDong;
    char line[100];

    printf("Nhap so dong: ");
    scanf("%d", &soDong);
    getchar();

    file = fopen("bt05.txt", "w");

    for (int i = 0; i < soDong; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

    fclose(file);

    file = fopen("bt05.txt", "r");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}

