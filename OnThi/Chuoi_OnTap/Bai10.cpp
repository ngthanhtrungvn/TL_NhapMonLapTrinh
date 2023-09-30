#include <stdio.h>
#include <string.h>
#include <conio.h>

int timChuoiTrongChuoi(char* s1, char* s2) {
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
            return i; // Trả về vị trí bắt đầu của chuỗi con
        }
    }

    return -1; // Không tìm thấy chuỗi con trong chuỗi
}

void main() {
    char s1[100];
    char s2[100];

    printf("Nhap chuoi s1: ");
    gets_s(s1);

    printf("Nhap chuoi s2: ");
    gets_s(s2);

    int viTri = timChuoiTrongChuoi(s1, s2);

    if (viTri != -1) {
        printf("Chuoi s1 tim thay tai vi tri %d trong chuoi s2.\n", viTri);
    }
    else {
        printf("Khong tim thay chuoi s1 trong chuoi s2.\n");
    }

    getch();
}
