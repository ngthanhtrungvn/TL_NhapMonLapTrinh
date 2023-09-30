#include <stdio.h>
#include <string.h>
#include <conio.h>

int kiemTraKyTuSoTrongChuoi(char* str) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            return 1; // Tồn tại ký tự số trong chuỗi
        }
    }
    return 0; // Không tồn tại ký tự số trong chuỗi
}

void main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(chuoi);

    if (kiemTraKyTuSoTrongChuoi(chuoi)) {
        printf("Chuoi chua ky tu so.\n");
    }
    else {
        printf("Chuoi khong chua ky tu so.\n");
    }

    getch();
}
