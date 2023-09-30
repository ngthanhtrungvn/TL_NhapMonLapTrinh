//#include<conio.h>
//#include<stdio.h>
//
//void nhapMang(int a[], int& n) {
//	printf("Nhap so luong phan tu: ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Nhap a[%d]: ", i);
//		scanf("%d", &a[i]);
//	}
//}
//
//void xuatMang(int a[], int n) {
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
// printf("\n");
//}
//
//int tinhTongChan(int a[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			sum += a[i];
//		}
//	}
//	return sum;
//}
//
//int tinhTongLe(int a[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 != 0)
//		{
//			sum += a[i];
//		}
//	}
//	return sum;
//}
//void main() {
//	int a[100], n;
//	nhapMang(a, n);
//	xuatMang(a, n);
//	printf("Tong chan: %d", tinhTongChan(a, n));
//	printf("\nTong le: %d", tinhTongLe(a, n));
//	getch();
//}