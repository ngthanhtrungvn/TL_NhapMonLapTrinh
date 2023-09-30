#include <stdio.h>
#include <string.h>
#include <conio.h>

void xuatHo(char* hoTen) {
    int viTriKhoangTrang = strchr(hoTen, ' ') - hoTen; // Tìm vị trí ký tự trắng đầu tiên

    char ho[50];
    strncpy(ho, hoTen, viTriKhoangTrang); // Sao chép phần đầu của chuỗi cho đến vị trí ký tự trắng
    ho[viTriKhoangTrang] = '\0'; // Kết thúc chuỗi

    printf("Ho: %s\n", ho);
}

void main() {
    char hoTen[100];
    printf("Nhap ho ten: ");
    gets_s(hoTen);

    xuatHo(hoTen);

    getch();
}
