#include <stdio.h>
#include <string.h>
#include <conio.h>

int kiemTraChuoiDoiXung(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return 0; // Chuỗi không đối xứng
        }
    }
    return 1; // Chuỗi đối xứng
}

void main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    gets_s(chuoi);

    if (kiemTraChuoiDoiXung(chuoi)) {
        printf("Chuoi la chuoi doi xung.\n");
    }
    else {
        printf("Chuoi khong phai la chuoi doi xung.\n");
    }

    getch();
}
