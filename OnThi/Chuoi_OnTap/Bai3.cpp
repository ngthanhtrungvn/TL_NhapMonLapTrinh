#include <stdio.h>
#include <string.h>
#include <conio.h>

int demTuTrongChuoi(char* str) {
    int len = strlen(str);
    int dem = 0;
    int i = 0;

    // Bỏ qua các ký tự trắng ở đầu chuỗi
    while (i < len && str[i] == ' ') {
        i++;
    }

    // Duyệt qua chuỗi để đếm số từ
    while (i < len) {
        // Nếu gặp ký tự trắng, tăng biến đếm
        if (str[i] == ' ') {
            dem++;
            // Bỏ qua các ký tự trắng liên tiếp
            while (i < len && str[i] == ' ') {
                i++;
            }
        }
        else {
            i++;
        }
    }

    // Khi kết thúc chuỗi, nếu không có ký tự trắng ở cuối, tăng biến đếm thêm 1
    if (i == len && str[i - 1] != ' ') {
        dem++;
    }

    return dem;
}

void main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(chuoi);

    int soTu = demTuTrongChuoi(chuoi);
    printf("So tu trong chuoi: %d\n", soTu);

    getch();
}
