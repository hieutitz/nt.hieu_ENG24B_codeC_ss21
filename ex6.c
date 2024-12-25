#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char saoChep;

    file1 = fopen("bt01.txt", "r");
 
    file2 = fopen("bt06.txt", "w");
   
    while ((saoChep = fgetc(file1)) != EOF) {
        fputc(saoChep, file2);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}

