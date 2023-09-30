#include <stdio.h>
#include <string.h>
#include <conio.h>

void chenChuoi(char* s1, char* s2, int k) {
    int lenS1 = strlen(s1);
    int lenS2 = strlen(s2);

    // Tạo mảng tạm để chứa chuỗi mới
    char ketQua[100];

    // Sao chép phần đầu của s1 (từ vị trí 0 đến k-1) vào ketQua
    strncpy(ketQua, s1, k);
    ketQua[k] = '\0';

    // Thêm chuỗi s2 vào ketQua
    strcat(ketQua, s2);

    // Thêm phần còn lại của s1 (từ vị trí k đến hết) vào ketQua
    strcat(ketQua, s1 + k);

    // Sao chép chuỗi ketQua vào s1
    strcpy(s1, ketQua);
}

void main() {
    char s1[100];
    char s2[100];
    int k;

    printf("Nhap chuoi s1: ");
    gets_s(s1);

    printf("Nhap chuoi s2: ");
    gets_s(s2);

    printf("Nhap vi tri k: ");
    scanf("%d", &k);

    chenChuoi(s1, s2, k);

    printf("Chuoi sau khi chen: %s\n", s1);

    getch();
}
