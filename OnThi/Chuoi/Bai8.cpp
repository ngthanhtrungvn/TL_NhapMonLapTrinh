#include <stdio.h>
#include <string.h>
#include <conio.h>

void demSoLanXuatHien(char* str) {
    int dem[256] = { 0 }; // Mảng để lưu số lần xuất hiện của mỗi ký tự

    // Duyệt qua chuỗi và tăng giá trị tương ứng trong mảng đếm
    for (int i = 0; str[i] != '\0'; i++) {
        dem[(unsigned char)str[i]]++;
    }

    // Xuất kết quả
    printf("So lan xuat hien cua moi ky tu trong chuoi:\n");
    for (int i = 0; i < 256; i++) {
        if (dem[i] > 0) {
            printf("Ky tu '%c': %d lan\n", (char)i, dem[i]);
        }
    }
}

void main() {
    char str[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(str);

    demSoLanXuatHien(str);

    getch();
}
