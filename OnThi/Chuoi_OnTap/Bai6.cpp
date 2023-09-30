#include <stdio.h>
#include <string.h>
#include <conio.h>

int timChuoiConTrongChuoi(char* st, char* s) {
    int lenSt = strlen(st);
    int lenS = strlen(s);

    for (int i = 0; i <= lenSt - lenS; i++) {
        int j;
        for (j = 0; j < lenS; j++) {
            if (st[i + j] != s[j]) {
                break;
            }
        }
        if (j == lenS) {
            return i; // Trả về vị trí bắt đầu của chuỗi con
        }
    }

    return -1; // Không tìm thấy chuỗi con trong chuỗi
}

void main() {
    char st[100];
    char s[100];

    printf("Nhap chuoi lon: ");
    gets_s(st);

    printf("Nhap chuoi con can tim: ");
    gets_s(s);

    int viTri = timChuoiConTrongChuoi(st, s);

    if (viTri != -1) {
        printf("Chuoi con tim thay tai vi tri %d trong chuoi lon.\n", viTri);
    }
    else {
        printf("Khong tim thay chuoi con trong chuoi lon.\n");
    }

    getch();
}
