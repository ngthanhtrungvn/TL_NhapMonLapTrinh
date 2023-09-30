#include <stdio.h>
#include <string.h>
#include <conio.h>

void xuatTen(char* hoTen) {
    int viTriKhoangTrang = strchr(hoTen, ' ') - hoTen + 1; // Tìm vị trí ký tự trắng đầu tiên

    printf("Ten: %s\n", hoTen + viTriKhoangTrang);
}

void main() {
    char hoTen[100];
    printf("Nhap ho ten: ");
    gets_s(hoTen);

    xuatTen(hoTen);

    getch();
}
