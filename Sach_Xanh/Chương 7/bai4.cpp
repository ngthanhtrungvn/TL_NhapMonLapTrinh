#include<conio.h>
#include<stdio.h>
#include<string>
struct DATE
{
	int d;
	int m;
	int y;
};
struct NHANVIEN
{
	char ms[11];
	char hoTen[31];
	DATE ns;
	char noiSinh[31];
	char diaChi[101];
	int ngayCT;
	float luong;
};
void nhap(NHANVIEN a[],int &n);
void tim(NHANVIEN a[],int n,char *s);
void xuat(NHANVIEN a[],int n);
void them(NHANVIEN a[],int &n,NHANVIEN &nv,int &k);
void timTen(NHANVIEN a[],int n,char *s);
void xoa(NHANVIEN a[],int &n,int &k);
void sapxep(NHANVIEN a[],int n);
void in(NHANVIEN a[],int n);
void main()
{
	NHANVIEN a[50];
	int n;
	nhap(a,n);
	xuat(a,n);
	NHANVIEN nv;
	int k;
	them(a,n,nv,k);
	xuat(a,n);
	char s[32];
	printf("\nNhap vao ma so can tim:");
	fflush(stdin);
	gets(s);
	tim(a,n,s);
	char t[32];
	printf("\nNhap vao ho ten can tiem:");
	fflush(stdin);
	gets(t);
	timTen(a,n,t);
	int e;
	xoa(a,n,e);
	xuat(a,n);
	sapxep(a,n);
	sapxep(a,n);
	printf("\nDanh sach luong giam dan la:");
	in(a,n);
	getch();
}
void nhapThongTin(NHANVIEN &nv)
{
	char c;
	printf("Nhap vao ma so nhan vien:");
	fflush(stdin);
	gets(nv.ms);
	printf("Nhap vao ho ten nhan vien:");
	fflush(stdin);
	gets(nv.hoTen);
	printf("Nhap vao ngay sinh:");
	scanf("%d%c%d%c%d",&nv.ns.d,&c,&nv.ns.m,&c,&nv.ns.y);
	printf("Nhap vao noi sinh:");
	fflush(stdin);
	gets(nv.noiSinh);
	printf("Nhap vao dia chi:");
	fflush(stdin);
	gets(nv.diaChi);
	printf("Nhap vao ngay cong tac:");
	scanf("%d",&nv.ngayCT);
	printf("Nhap vao so luong:");
	scanf("%f",&nv.luong);
}
void nhap(NHANVIEN a[],int &n)
{
	do
	{
		printf("Nhap vao so luong nhan vien:");
		scanf("%d",&n);}while(n<=0);
		for(int i=0;i<n;i++)
		{	printf("\nNhap thong tin nhan thu %d\n",i);
			nhapThongTin(a[i]);
		for(int j=0;j<i;j++){
			if(strcmp(a[i].ms,a[j].ms)==0)
			{
				printf("\nNhap lai!\n");
				i--;
			}
			break;
		}
		}
}
void xuatns(NHANVIEN nv)
{
	printf("%s\n%s\n%d/%d/%d\n%s\n%s\n%d\n%.f\n",nv.ms,nv.hoTen,nv.ns.d,nv.ns.m,nv.ns.y,nv.noiSinh,nv.diaChi,nv.ngayCT,nv.luong);
}
void xuat(NHANVIEN a[],int n)
{
	for(int i=0;i<n;i++)
		{
			printf("\nThong tin nhan vien thu %d\n",i);
			xuatns(a[i]);
		}
}
void them(NHANVIEN a[],int &n,NHANVIEN &nv,int &k)
{
	printf("\nNhap vao vi tri ban muon them:\n");
	scanf("%d",&k);
		nhapThongTin(nv);
	if(k<0||k>=n)
		return ;
	for(int i=n;i>k;i--)
		a[i]=a[i-1];
	a[k]=nv;
	n++;
}
void tim(NHANVIEN a[],int n,char *s)
{
	for(int i=0;i<n;i++)
		if(strcmpi(a[i].ms,s)==0)
		xuatns(a[i]);
}
void timTen(NHANVIEN a[],int n,char *s)
{
	for(int i=0;i<n;i++)
		if(strcmpi(a[i].hoTen,s)==0)
		xuatns(a[i]);
}
void xoa(NHANVIEN a[],int &n,int &k)
{
	printf("Ban muon xoa nhan o vi tri:");
	scanf("%d",&k);
	if(k<0||k>=n)
		return ;
	for(int i=k;i<n;i++)
		a[i]=a[i+1];
	n--;
}
void swap(NHANVIEN &x,NHANVIEN &y)
{
	NHANVIEN t=x;x=y;y=t;
}
void in(NHANVIEN a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%.f\t  ",a[i].luong);
}
void sapxep(NHANVIEN a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].luong<a[j].luong)
			swap(a[i],a[j]);	
}