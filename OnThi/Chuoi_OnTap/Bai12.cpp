#include <stdio.h>
#include <string.h>
#include <conio.h>

void dinhDangChuoiSo(char* s) {
    int len = strlen(s);
    int i = len - 1;
    int count = 0; // Biến đếm số ký tự đã duyệt qua

    while (i >= 0) {
        count++;
        if (count % 3 == 0 && i > 0) {
            memmove(s + i + 1, s + i, len - i); // Dời ký tự phía sau để làm chỗ cho dấu ","
            s[i] = ',';
        }
        i--;
    }
}

void main() {
    char chuoi[100];
    printf("Nhap chuoi so nguyen: ");
    gets_s(chuoi);

    dinhDangChuoiSo(chuoi);

    printf("Chuoi sau khi dinh dang: %s\n", chuoi);

    getch();
}
