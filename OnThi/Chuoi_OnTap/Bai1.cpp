#include <stdio.h>
#include <string.h>
#include <conio.h>

void xuatTuDauTien(char* str) {
    int len = strlen(str);
    int i = 0;

    // Bỏ qua các ký tự trắng ở đầu chuỗi
    while (i < len && str[i] == ' ') {
        i++;
    }

    // In ra từ đầu tiên
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

    xuatTuDauTien(chuoi);

    getch();
}
