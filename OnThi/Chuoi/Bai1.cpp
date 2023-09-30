#include <stdio.h>
#include <string.h>
#include <conio.h>


int demSoTuTrongChuoi(char* chuoi) {
    int dem = 0;
    int doDai = strlen(chuoi);

    for (int i = 0; i < doDai; i++) {
        if (chuoi[i] != ' ') {
            dem++;
        }
    }
    return dem;
}


void main() {
    char s[100];
    printf("Moi ban nhap chuoi: ");
    fflush(stdin);
    gets_s(s);
    printf("Ten co tong cong %d tu", demSoTuTrongChuoi(s));
    getch();
}


