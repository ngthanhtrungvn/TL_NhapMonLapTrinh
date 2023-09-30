#include <stdio.h>
#include <string.h>
#include <conio.h>

int kiemTraMaLopCNTT(char* maLop) {
    if (strlen(maLop) >= 6) { // Đảm bảo mã lớp có ít nhất 6 ký tự
        if (maLop[4] == 'T' && maLop[5] == 'H') {
            return 1; // Mã lớp thuộc ngành CNTT
        }
    }
    return 0; // Mã lớp không thuộc ngành CNTT
}

void main() {
    char maLop[20];
    printf("Nhap ma lop: ");
    fflush(stdin);
    gets_s(maLop);

    if (kiemTraMaLopCNTT(maLop)) {
        printf("Ma lop thuoc nganh CNTT.\n");
    }
    else {
        printf("Ma lop khong thuoc nganh CNTT.\n");
    }

    getch();
}
