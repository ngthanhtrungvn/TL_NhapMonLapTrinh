#include<conio.h>
#include<stdio.h>
#include<string>
#define MAX 100
struct SACH
{
	char maSach[11];
	char tenSach[31];
	float giaBan;
	int soLuong;
};
void nhapTuFile(SACH a[],int &n);
void xuatSL(SACH a[],int n);
void xuat(SACH a[],int n);
void sapXep(SACH a[],int n);
void xuatSach(SACH s);
void xuatMa(SACH a[],int n);
void xuatTen(SACH a[],int n);
void sapXepSl(SACH a[],int n);
void xoa(SACH a[],int &n,int k);
void xoaSach(SACH a[],int &n);
void main()
{
	SACH a[MAX];
	int n;
	FILE *f=fopen("IP.txt","r");
	nhapTuFile(a,n);
	fclose(f);
	xuat(a,n);
	sapXep(a,n);
	printf("Sau khi sap xep:\n");
	xuat(a,n);
	printf("Cac sach co so luong lon hon 10:\n");
	xuatSL(a,n);
	printf("Cac sach co ma SA la:\n");
	xuatMa(a,n);
	printf("Cac sach co ten la lap trinh la:\n");
	xuatTen(a,n);
	sapXepSl(a,n);
	printf("Cac sach giam dan theo so luong:\n");
	xuat(a,n);
	xoaSach(a,n);
	printf("Cac sach sau khi xoa la:\n");
	xuat(a,n);
	getch();
}
void nhapTuFile(SACH a[],int &n)
{
	 FILE *f=fopen("IP.txt","r");
	fscanf(f,"%d",&n);
	char c;
	fscanf(f,"%c",&c);
	for(int i=0;i<n;i++)
	{
		fgets(a[i].maSach,13,f);
		int l=strlen(a[i].maSach);
		a[i].maSach[l-1]='\0';
		fgets(a[i].tenSach,33,f);
		l=strlen(a[i].tenSach);
		a[i].tenSach[l-1]='\0';
		fscanf(f,"%f",&a[i].giaBan);
		fscanf(f,"%c",&c);
		fscanf(f,"%d",&a[i].soLuong);
		fscanf(f,"%c",&c);
	}
	fclose(f);
}
void xuat(SACH a[],int n)
{
	for(int i=0;i<n;i++)
		xuatSach(a[i]);
}
void xuatSach(SACH s)
{
	printf("%s\n%s\n%.2f\n%d\n",s.maSach,s.tenSach,s.giaBan,s.soLuong);
}
void swap(SACH &x,SACH &y)
{
	SACH t=x;
	x=y;
	y=t;
}
void sapXep(SACH a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(strcmp(a[i].tenSach,a[j].tenSach)==1)
				swap(a[i],a[j]);
}
void xuatSL(SACH a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].soLuong>10)
			xuatSach(a[i]);
}
void xuatMa(SACH a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].maSach[0]=='S'&&a[i].maSach[1]=='A')
			xuatSach(a[i]);
}
void xuatTen(SACH a[],int n)
{
	for(int i=0;i<n;i++)
		if(strcmp(a[i].tenSach,"Lap trinh")==0)
			xuatSach(a[i]);
}
void sapXepSl(SACH a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].soLuong<a[j].soLuong)
	swap(a[i],a[j]);
}
void xoa(SACH a[],int &n,int k)
{
	for(int i=k;i<n-1;i++)
		a[i]=a[i+1];
	n--;
}
void xoaSach(SACH a[],int &n)
{
	for(int i=0;i<n;i++)
		if(a[i].soLuong==0)
		{
			xoa(a,n,i);
			i--;
		}
}
