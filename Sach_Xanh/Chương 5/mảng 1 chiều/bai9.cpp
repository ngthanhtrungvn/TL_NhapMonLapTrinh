#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
		do
	{
		printf("Nhap so luong phan tu trong mang vao: ");
		scanf("%d",&n);
	}while(n<0||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
		if((a[i]+a[i-1])%2==0)  // so trc cong so sau chia du cho 2 nhap lai
		{
			printf("Nhap lai!\n");
			--i;
		}
	}
}
void xuatMang(int a[],int n) 
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("cac phan tu trong mang la:");
	xuatMang(mang,n);
	getch();
}