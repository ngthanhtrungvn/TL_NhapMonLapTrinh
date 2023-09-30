#include <stdio.h>
#include <string.h>
#include <conio.h>

void xoaKhoangTrangThua(char* str) {
    int len = strlen(str);
    int i, j;

    // Dịch các ký tự không phải là khoảng trắng tới đầu chuỗi
    j = 0;
    for (i = 0; i < len; i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // Đặt ký tự kết thúc chuỗi tại vị trí j
}

void main() {
    char str[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(str);

    xoaKhoangTrangThua(str);

    printf("Chuoi sau khi xoa ky tu trang thua: %s\n", str);

    getch();
}
