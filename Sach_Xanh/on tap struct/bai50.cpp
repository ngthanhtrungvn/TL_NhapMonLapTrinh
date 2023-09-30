#include<conio.h>
#include<string>
#include<stdio.h>
struct SACH
{
	char ma[11];
	char ten[21];
	float giaBan;
	int sl;
};
void nhap(SACH &s)
{
	printf("Nhap ma:");
	fflush(stdin);
	gets(s.ma);
	printf("Nhap ten sach:");
	fflush(stdin);
	gets(s.ten);
	printf("Nhap vao gia ban:");
	scanf("%f",&s.giaBan);
	printf("Nhap vao so luong:");
	scanf("%d",&s.sl);
}
void nhapTT(SACH a[],int &n)
{
	printf("Nhap vao so sach:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao thong tin sach thu %d\n",i);
		nhap(a[i]);
	}
}
void xuat(SACH s)
{
	printf("\n%s\n%s\n%.2f\n%d\n",s.ma,s.ten,s.giaBan,s.sl);
}
void xuatTT(SACH a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nThong tin sach %d\n",i);
		xuat(a[i]);
	}
}
int tong(SACH a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		s+=a[i].sl;
	return s;
}
void swap(SACH &x,SACH &y)
{
	SACH t=x;x=y;y=t;
}
void sapXep(SACH a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(strcmp(a[i].ten,a[j].ten)==1)
				swap(a[i],a[j]);
	xuatTT(a,n);
}
void xuatSL(SACH a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].sl>10)
			xuat(a[i]);
}
void main()
{
	SACH a[42];
	int n;
	nhapTT(a,n);
	xuatTT(a,n);
	printf("\nTong so luong cac cuon sach la %d\n",tong(a,n));
	printf("Sau khi sap xep\n");
	sapXep(a,n);
	printf("\nSo luong >10");
	xuatSL(a,n);
	getch();
}