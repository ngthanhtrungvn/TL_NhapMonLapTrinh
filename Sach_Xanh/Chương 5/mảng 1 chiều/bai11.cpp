#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
		do
	{
		printf("Nhap so luong phan tu trong mang vao:");
		scanf("%d",&n);
	}while(n<0||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
int timMin(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
		if(min>a[i])
	min=a[i];
	return min;
}
void main()
{
	int mang[MAX];
	int n;
	nhapMang(mang,n);
	printf("Cac phan tu trong mang la: ");
	xuatMang(mang,n);
	int kq=timMin(mang,n);
	printf("\nPhan tu nho nhat trong mang la %d",kq);
	getch();
}