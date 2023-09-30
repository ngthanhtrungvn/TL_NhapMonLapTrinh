#include <stdio.h>
#include <string.h>
#include <conio.h>

void xoaKyTuTrangThua(char* s) {
    int len = strlen(s);
    char ketQua[100];
    int index = 0;
    int khoangTrang = 0; // Biến kiểm tra xem đã gặp ký tự trống hay chưa

    for (int i = 0; i < len; i++) {
        if (s[i] != ' ') {
            ketQua[index] = s[i];
            index++;
            khoangTrang = 0;
        }
        else {
            if (!khoangTrang) {
                ketQua[index] = s[i];
                index++;
            }
            khoangTrang = 1;
        }
    }

    // Xóa ký tự trống cuối cùng nếu có
    if (index > 0 && ketQua[index - 1] == ' ') {
        index--;
    }

    // Thêm ký tự kết thúc chuỗi
    ketQua[index] = '\0';

    strcpy(s, ketQua); // Copy kết quả trở lại chuỗi ban đầu
}

void main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(chuoi);

    xoaKyTuTrangThua(chuoi);

    printf("Chuoi sau khi xoa ky tu trang thua: %s\n", chuoi);

    getch();
}
