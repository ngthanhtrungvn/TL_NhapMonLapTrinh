//#include<conio.h>
//#include<stdio.h>
//#include<math.h>
//
//int kTraSNT(int x) {
//	if (x < 2)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//void main() {
//	int x;
//	int dem = 0;
//	int i = 2;
//	do
//	{
//		printf("Nhap x: ");
//		scanf("%d", &x);
//	} while (x <= 0);
//	while (dem < x)
//	{
//		if (kTraSNT(i))
//		{
//			printf("%d ", i);
//			dem++;
//		}
//		i++;
//	}
//	getch();
//}