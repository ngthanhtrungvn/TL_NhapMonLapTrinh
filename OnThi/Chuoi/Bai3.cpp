#include <stdio.h>
#include <string.h>
#include <conio.h>

void layTenLot(char* hoTen, char* tenLot) {
    char* tenDau = strchr(hoTen, ' ');
    if (tenDau) {
        tenDau++; // Di chuyển con trỏ đến phần bắt đầu của phần tên lót (sau dấu cách)
        strcpy(tenLot, tenDau); // Sao chép phần tên lót vào mảng tenLot
        tenLot[strcspn(tenLot, " \n")] = '\0'; // Loại bỏ ký tự newline (nếu có)
    }
}


void main() {
    char hoTen[100];
    printf("Nhap ho va ten: ");
    fflush(stdin);
    gets_s(hoTen);

    char tenLot[50];
    layTenLot(hoTen, tenLot);

    printf("Chuoi ban vua nhap la: %s\n", hoTen);
    printf("Phan ten lot trong chuoi: %s\n", tenLot);

    getch();
}


