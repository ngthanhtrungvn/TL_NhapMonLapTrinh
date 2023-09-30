#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		if (a == b && b == c) {
			printf("Tam giac la tam giac deu.\n");
		}
		else if (a == b || a == c || b == c) {
			if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
				printf("Tam giac la tam giac vuong can.\n");
			}
			else {
				printf("Tam giac la tam giac can.\n");
			}
		}
		else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			printf("Tam giac la tam giac vuong.\n");
		}
		else {
			printf("Tam giac la tam giac thuong.\n");
		}
	}
	else {
		printf("Ba canh vua nhap khong the tao thanh tam giac.\n");
	}
	getch();
}