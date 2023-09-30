#include <stdio.h>
#include <string.h>
#include <conio.h>

int kiemTraDoiXung(char* str) {
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; // Không đối xứng
        }
    }
    return 1; // Đối xứng
}

void main() {
    char str[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(str);

    if (kiemTraDoiXung(str)) {
        printf("Chuoi la chuoi doi xung.\n");
    }
    else {
        printf("Chuoi khong la chuoi doi xung.\n");
    }

    getch();
}
