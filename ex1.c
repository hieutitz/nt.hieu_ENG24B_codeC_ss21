#include <stdio.h>

int main() {
    FILE *file;
    char input[100]; 
    
    printf("Nhap chuoi: ");
    fgets(input, sizeof(input), stdin); 
    
    file = fopen("bt01.txt", "w"); 
    fprintf(file, "%s", input);
    
    fclose(file);

    return 0;
}

