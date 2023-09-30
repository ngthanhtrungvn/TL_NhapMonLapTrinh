#include <stdio.h>
#include <string.h>
#include <conio.h>

void xuatTuSauCung(char* str) {
    int len = strlen(str);
    int i = len - 1;

    // Bỏ qua các ký tự trắng ở cuối chuỗi
    while (i >= 0 && str[i] == ' ') {
        i--;
    }

    // In ra từ sau cùng
    while (i >= 0 && str[i] != ' ') {
        i--;
    }
    i++; // Đặt vị trí con trỏ trở lại đầu từ

    while (i < len && str[i] != ' ') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

void main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(chuoi);

    xuatTuSauCung(chuoi);

    getch();
}
