#include <stdio.h>
#include <string.h>
#include <conio.h>

void layHo(char* hoTen, char* ho) {
    char* tenDau = strchr(hoTen, ' '); // Tìm vị trí của ký tự dấu cách đầu tiên trong chuỗi hoTen

    // Nếu tìm thấy dấu cách (tenDau khác NULL)
    if (tenDau) {
        int doDaiHo = tenDau - hoTen; // Tính độ dài của phần họ bằng cách tính khoảng cách giữa tenDau và hoTen
        strncpy(ho, hoTen, doDaiHo); // Sao chép phần họ từ hoTen vào mảng ho với độ dài là doDaiHo
        ho[doDaiHo] = '\0'; // Đặt ký tự kết thúc chuỗi để ho thành một chuỗi kết thúc hợp lệ
    }
}


void main() {
    char hoTen[100];
    printf("Moi ban nhap chuoi: ");
    fflush(stdin);
    gets_s(hoTen);

    char ho[50];
    layHo(hoTen, ho);

    printf("Chuoi ban vua nhap la: ");
    puts(hoTen);
    printf("Phan ho trong chuoi: ");
    puts(ho);

    getch();
}


