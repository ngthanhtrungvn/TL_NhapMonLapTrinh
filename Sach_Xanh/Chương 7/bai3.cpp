#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct PHANSO
{
	int tu;
	int mau;
};
void xuat(PHANSO a[],int n);
PHANSO timMax(PHANSO a[],int n,PHANSO &min);
void nhapTuFile(PHANSO a[],int &n);
void toiGian(PHANSO &ps);
void xuatToiGian(PHANSO a[],int n);
void xuli(PHANSO a[],int n);
int dem(PHANSO a[],int n);
void xuatNghia(PHANSO a[],int n);
void sapXep(PHANSO a[],int n);
void QuyDong(PHANSO a[],int n);
void main()
{
	PHANSO a[50];
	int n;
	FILE *f=fopen("Phanso.txt","r");
	nhapTuFile(a,n);
	fclose(f);
	xuat(a,n);
	printf("Phan so toi gian:\n");
	xuatToiGian(a,n);
	xuli(a,n);
	printf("\nCo %d phan so lon hon 1",dem(a,n));
	printf("\nCac phan so gia tri nguyen:\n");
	xuatNghia(a,n);
	sapXep(a,n);
	PHANSO min;
	printf("\nCac phan so sau khi sap xep la:\n");
	xuatToiGian(a,n);
	PHANSO kq=timMax(a,n,min);
	printf("\nPhan so lon nhat trong mang la:%d/%d\nPhan so nho nhat trong mang la %d/%d",kq.tu,kq.mau,min.tu,min.mau);
	QuyDong(a,n);
	getch();
}
void nhapTuFile(PHANSO a[],int &n)
{
	char c;
	FILE *f=fopen("Phanso.txt","r");
	fscanf(f,"%d",&n);
	fscanf(f,"%c",&c);
	for(int i=0;i<n;i++)
			{fscanf(f,"%d",&a[i].tu);
			fscanf(f,"%c",&c);
			fscanf(f,"%d",&a[i].mau);
			fscanf(f,"%c",&c);}
			fclose(f);
}
void xuatps(PHANSO a)
{
	
	if(a.mau!=0)
	printf("%d/%d\n",a.tu,a.mau);
}
void xuat(PHANSO a[],int n)
{
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
		xuatps(a[i]);
	}
}
int kTra(int x,int y)
{
	int a=abs(x);
	int b=abs(y);
	while(a!=b)
	{
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}
void toiGian(PHANSO &ps)
{
	int kq=kTra(ps.tu,ps.mau);
		ps.tu/=kq;
		ps.mau/=kq;
}
void xuatpsToiGian(PHANSO a)
{
	
	if(a.mau!=0)
	{toiGian(a);
	if(a.tu==a.mau)
		printf("1\n");
	else
		if(a.tu%a.mau==0)
			printf("%d\n",a.tu/a.mau);
		else
	printf("%d/%d\n",a.tu,a.mau);
	}
}
void xuatToiGian(PHANSO a[],int n)
{
	for(int i=0;i<n;i++)
		xuatpsToiGian(a[i]);
}
PHANSO tongps(PHANSO a[],int n)
{
    int i,z;
	PHANSO kq=a[1];
    for (i=2; i<n; i++)
    {
        kq.tu =kq.tu*a[i].mau +kq.mau*a[i].tu;
        kq.mau = kq.mau*a[i].mau;
		z=kTra(kq.tu, kq.mau);
        kq.tu /=z;
        kq.mau /=z;
    }
    return kq;
}
void xuli(PHANSO a[],int n)
{
	PHANSO tong = tongps(a,n);
    printf(" Tong PS =%d/%d",tong.tu,tong.mau);
}
int dem(PHANSO a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i].tu>a[i].mau&&a[i].mau!=0)
			dem++;
	return dem;
}
void xuatNghia(PHANSO a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].mau!=0)
			if(a[i].tu%a[i].mau==0)
			printf("%d\n",a[i].tu/a[i].mau);
}
void swap(PHANSO &x,PHANSO &y)
{
	PHANSO t=x;
	x=y;y=t;
}
void sapXep(PHANSO a[],int n)
{
	for(int i=0;i<n-1;i++)
		if(a[i].mau!=0)
		for(int j=i+1;j<n;j++)
			if(a[i].tu/(float)a[i].mau<a[j].tu/(float)a[j].mau)
				swap(a[i],a[j]);
}
PHANSO timMax(PHANSO a[],int n,PHANSO &min)
{
	PHANSO max=a[1];
	for(int i=2;i<n;i++)
		if(max.tu/(float)max.mau<a[i].tu/(float)a[i].mau)
			max=a[i];
		else
			min=a[i];
	return max;
}
int BCNN(int a,int b)
{
	int x=abs(a);
	int y=abs(b);
	return (x*y)/kTra(x,y);
}
void QuyDong(PHANSO a[],int n)
{

	int b=BCNN(a[1].mau,a[2].mau);
	for(int i=3;i<n;i++)
	{
		b=BCNN(b,a[i].mau);
	}
	printf("\nQuy dong:\n");
	for(int i=1;i<n;i++)
	{
		printf("%d/%d\n",a[i].tu*(b/a[i].mau),b);
	}
}

