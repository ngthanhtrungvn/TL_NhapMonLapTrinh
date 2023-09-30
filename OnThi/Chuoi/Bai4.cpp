#include <stdio.h>
#include <string.h>
#include <conio.h>

#include <stdio.h>
#include <string.h>

int kiemTraHoTran(char* hoTen) {
    // Kiểm tra các ký tự của phần họ trong chuỗi hoTen
    for (int i = 0; hoTen[i] != '\0'; i++) {
        if (hoTen[i] == ' ') {
            return strncmp(hoTen, "Tran", i) == 0; // So sánh phần họ với "Tran"
        }
    }
    return 0;
}




void main() {
    char hoTen[100];
    printf("Nhap ho va ten: ");
    fflush(stdin);
    gets_s(hoTen);

    if (kiemTraHoTran(hoTen)) {
        printf("Phan ho la Tran.\n");
    }
    else {
        printf("Phan ho khong phai la Tran.\n");
    }

    getch();
}
