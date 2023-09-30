#include<stdio.h>
#include<conio.h>
#include<string>
#include<math.h>
struct TOADO
{
	float x;
	float y;
};
void nhapTT(TOADO &td)
{
	printf("Nhap vao hoanh do:");
	scanf("%f",&td.x);
	printf("Nhap vao tung do:");
	scanf("%f",&td.y);
}
void nhap(TOADO a[],int &n)
{
	printf("\nNhap vao so luong cac diem:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nNhap diem thu %d\n",i);
		nhapTT(a[i]);
	}
}
void demHoanhDuong(TOADO a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i].x>0)
			dem++;
	printf("\nCo %d diem co hoanh do duong",dem); 
}
void xuat(TOADO a[],int n)
{
	for(int i=0;i<n;i++)
		printf("\nA%d[%.f][%.f]\n",i,a[i].x,a[i].y);
}
void xuatHoanh(TOADO a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].y==0)
			printf("\nA%d[%.f][%.f]\n",i,a[i].x,a[i].y);			
}
void xuatTung(TOADO a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].x==0)
			printf("\nA%d[%.f][%.f]\n",i,a[i].x,a[i].y);			
}
float tinhKC(TOADO A)
{
	return sqrt(pow(A.x,2.0)+pow(A.y,2));
}
int sosanh(TOADO A,TOADO B)
{
	if(tinhKC(A)>tinhKC(B))
		return 2;
	return 1;
}
void swap(float &x,float &y)
{
	float t=x;x=y;y=t;
}
void hoanDoi(TOADO a[],int n)
{
	for(int i=0;i<n;i++)
		swap(a[i].x,a[i].y);
}
void main()
{
	TOADO A;
	TOADO B;
	nhapTT(A);
	nhapTT(B);
	TOADO a[54];
	if(sosanh(A,B)==1)
		printf("A[%.f][%.f] gan goc toa do hon B[%.f][%.f]",A.x,A.y,B.x,B.y);
	else
		printf("B[%.f][%.f] gan goc toa do hon A[%.f][%.f]",B.x,B.y,A.x,A.y);
	int n;
	nhap(a,n);
	xuat(a,n);
	xuatHoanh(a,n);
	xuatTung(a,n);
	demHoanhDuong(a,n);
	hoanDoi(a,n);
	xuat(a,n);
	getch();
}