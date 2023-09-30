#include <stdio.h>
#include <string.h>
#include <conio.h>

int demSoTuTrongChuoi(char* s) {
    int len = strlen(s);
    int dem = 0;
    int i = 0;

    // Bỏ qua các ký tự trống ở đầu chuỗi
    while (i < len && s[i] == ' ') {
        i++;
    }

    // Duyệt qua từng ký tự trong chuỗi
    while (i < len) {
        // Nếu gặp ký tự trống, tăng biến đếm và bỏ qua các ký tự trống liên tiếp
        if (s[i] == ' ') {
            dem++;
            while (i < len && s[i] == ' ') {
                i++;
            }
        }
        else {
            i++;
        }
    }

    // Khi kết thúc chuỗi, nếu không có ký tự trống ở cuối, tăng biến đếm thêm 1
    if (i == len && s[i - 1] != ' ') {
        dem++;
    }

    return dem;
}

void main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets_s(chuoi);

    int soTu = demSoTuTrongChuoi(chuoi);
    printf("So tu trong chuoi: %d\n", soTu);

    getch();
}
