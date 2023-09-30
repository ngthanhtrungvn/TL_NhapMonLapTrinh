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
//int timMax(int a[], int n) {
//	int max = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//void main() {
//	int a[100], n;
//	nhapMang(a, n);
//	xuatMang(a, n);
//	printf("Max la: %d", timMax(a, n));
//	getch();
//}