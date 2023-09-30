#include <stdio.h>
#include <string.h>
#include <conio.h>

void xuatTenLot(char* hoTen) {
    int viTriKhoangTrangDau = strchr(hoTen, ' ') - hoTen + 1; // Tìm vị trí ký tự trắng đầu tiên
    int viTriKhoangTrangCuoi = strrchr(hoTen, ' ') - hoTen;    // Tìm vị trí ký tự trắng cuối cùng

    printf("Ten lot: ");
    for (int i = viTriKhoangTrangDau; i < viTriKhoangTrangCuoi; i++) {
        printf("%c", hoTen[i]);
    }
    printf("\n");
}

void main() {
    char hoTen[100];
    printf("Nhap ho ten: ");
    gets_s(hoTen);

    xuatTenLot(hoTen);

    getch();
}
