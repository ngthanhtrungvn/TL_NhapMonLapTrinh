#include <stdio.h>
#include <string.h>
#include <conio.h>

int kiemTraTenLan(char* hoTen) {
    return strstr(hoTen, "Lan") != NULL; // Tìm kiếm chuỗi "Lan" trong chuỗi hoTen
}

void main() {
    char hoTen[100];
    printf("Nhap ho va ten: ");
    fflush(stdin);
    gets_s(hoTen);

    if (kiemTraTenLan(hoTen)) {
        printf("Chuoi ho ten co chua 'Lan'.\n");
    }
    else {
        printf("Chuoi ho ten khong chua 'Lan'.\n");
    }

    getch();
}
