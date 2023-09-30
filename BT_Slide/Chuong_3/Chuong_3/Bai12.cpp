//#include<conio.h>
//#include<stdio.h>
//
//int timUCLN(int a, int b) {
//	if (a == 0 || b == 0)
//	{
//		return a + b;
//	}
//	while (a!=b)
//	{
//		if (a > b)
//		{
//			a = a - b;
//		}
//		else
//		{
//			b = b - a;
//		}
//	}
//	return a;
//}
//
//int timBCNN(int a, int b) {
//	return a * b / timUCLN(a, b);
//}
//
//void main() {
//	int a, b;
//	printf("Nhap a: ");
//	scanf("%d", &a);
//	printf("Nhap b: ");
//	scanf("%d", &b);
//	printf("UCLN: %d", timUCLN(a, b));
//	printf("\nBCNN: %d", timBCNN(a, b));
//	getch();
//}