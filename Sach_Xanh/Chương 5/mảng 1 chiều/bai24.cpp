#include<conio.h>
#include<stdio.h>
#define MAX 100
void nhapMang(int a[],int &n)
{
	printf("Nhap so luong phan tu trong mang vao:");
	scanf("%d",&n);
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
void themX(int a[],int &n,int x,int k)
{
	for(int i=n;i>k;i--) 
		a[i]=a[i-1];	 /*di chuyen mang de tao o trong trc khi them*/
	a[k]=x;  //chen vi tri tai x
	n++;  //tang so luong phan tu sau khi chen
}
void main()
{
	int n;
	int mang[MAX];
	nhapMang(mang,n);
	printf("Mang vua nhap la:");
	xuatMang(mang,n);

	int i,x;
	printf("\nBan muon them phan tu nao: ");
	scanf("%d",&x);

	printf("\nBan muon them phan tu %d vi tri nao: ",x);
	scanf("%d",&i);

	themX(mang,n,x,i);
	printf("Mang vua them la: ");
	xuatMang(mang,n);
	getch();
}