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
void xuatVTChan(int a[],int n)  //xuat ko lam thay doi gia tri nen dung void
{
	for(int i=0;i<n;i++)
		if(i%2==0)
			printf("%5d ",a[i]);		
}
void xuatVTLe(int a[],int n)
	{
	for(int i=0;i<n;i++)
		if(i%2!=0)
			printf("%5d ",a[i]);
}
void main()
{
	int mang[MAX];
	int n;
	nhapMang(mang,n);
	printf("Cac phan tu trong mang la: ");
	xuatMang(mang,n);
	printf("\nCac phan tu o vi tri chan la:");
	xuatVTChan(mang,n);
	printf("\nCac phan tu o vi tri le la:");
	xuatVTLe(mang,n);
	getch();
}