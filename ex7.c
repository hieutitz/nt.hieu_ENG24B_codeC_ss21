#include <stdio.h>

struct SinhVien {
    int id;
    char name[100];
    int age;
};

int main() {
    FILE *file;
    struct SinhVien sv;
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &sv.id);
        printf("Ten: ");
        fgets(sv.name, sizeof(sv.name), stdin);
        printf("Tuoi: ");
        scanf("%d", &sv.age);

        fprintf(file, "%d %s%d\n", sv.id, sv.name, sv.age);
    }
    fclose(file);

    return 0;
}

