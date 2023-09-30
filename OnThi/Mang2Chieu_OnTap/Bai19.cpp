#include <stdio.h>
#include <conio.h>

void nhapMangA(int a[][100], int& mA, int& nA) {
    printf("Nhap so dong: ");
    scanf("%d", &mA);
    printf("Nhap so cot: ");
    scanf("%d", &nA);

    for (int i = 0; i < mA; i++) {
        for (int j = 0; j < nA; j++) {
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void nhapMangB(int a[][100], int& mB, int& nB) {
    printf("Nhap so dong: ");
    scanf("%d", &mB);
    printf("Nhap so cot: ");
    scanf("%d", &nB);

    for (int i = 0; i < mB; i++) {
        for (int j = 0; j < nB; j++) {
            printf("Nhap b[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatMang(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void tronHaiMaTran(int a[][100], int b[][100], int c[][100], int mA, int nA, int mB, int nB) {
    for (int i = 0; i < mA; i++) {
        for (int j = 0; j < nA; j++) {
            if (i < mB && j < nB) {
                c[i][j] = a[i][j] + b[i][j];
            }
            else if (i < mA) {
                c[i][j] = a[i][j];
            }
            else {
                c[i][j] = b[i][j];
            }
        }
    }
}

int main() {
    int a[100][100], b[100][100], c[100][100];
    int mA, nA, mB, nB;

    nhapMangA(a, mA, nA);
    xuatMang(a, mA, nA);

    nhapMangB(b, mB, nB);
    xuatMang(b, mB, nB);



    tronHaiMaTran(a, b, c, mA, nA, mB, nB);

    printf("Ma tran sau khi tron:\n");
    xuatMang(c, mA, nA);

    getch();
    return 0;
}
