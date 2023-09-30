#include <stdio.h>
#include <string.h>
#include <conio.h>

void catKyTuTrangThua(char* str) {
    int len = strlen(str);
    char ketQua[100];
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            ketQua[index] = str[i];
            index++;
        }
        else if (i > 0 && str[i - 1] != ' ') {
            ketQua[index] = ' ';
            index++;
        }
    }

    // Thêm ký tự kết thúc chuỗi
    ketQua[index] = '\0';

    strcpy(str, ketQua); // Copy kết quả trở lại chuỗi ban đầu
}

void main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(chuoi);

    catKyTuTrangThua(chuoi);

    printf("Chuoi sau khi cat ky tu trang thua: %s\n", chuoi);

    getch();
}
