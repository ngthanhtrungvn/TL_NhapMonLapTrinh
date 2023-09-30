#include <stdio.h>
#include <string.h>
#include <conio.h>

void timVaXuatViTri(char* s1, char* s2) {
    int lenS1 = strlen(s1);
    int lenS2 = strlen(s2);

    for (int i = 0; i <= lenS2 - lenS1; i++) {
        int j;
        for (j = 0; j < lenS1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == lenS1) {
            printf("%d ", i); // Xuất vị trí bắt đầu của chuỗi s1 trong chuỗi s2
        }
    }
}

void main() {
    char s1[100];
    char s2[100];

    printf("Nhap chuoi s1: ");
    gets_s(s1);

    printf("Nhap chuoi s2: ");
    gets_s(s2);

    printf("Cac vi tri cua chuoi s1 trong chuoi s2: ");
    timVaXuatViTri(s1, s2);

    getch();
}
