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
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
float tinhTB(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		s+=a[i];
	return s/(float)n;  //cong lai chia cho so minh nhap
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Cac phan tu trong mang la:");	
	xuatMang(mang,n);
	float kq=tinhTB(mang,n);
	printf("\nGia tri trung binh cua mang la: %2.f",kq);
	getch();
}