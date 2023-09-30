#include<stdio.h>
#include<conio.h>
#include<math.h>
struct PHANSO
{
	int tu;
	int mau;
};
void nhapTT(PHANSO &a)
{
	printf("Nhap vao tu so:");
	scanf("%d",&a.tu);
	printf("Nhap vao mau so:");
	scanf("%d",&a.mau);
}
void nhap(PHANSO a[],int &n)
{
	printf("Nhap vao so luong phan so:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao phan so thu %d\n",i);
		nhapTT(a[i]);
	}
}
void xuatTT(PHANSO a)
{
	printf("\n%d/%d\n",a.tu,a.mau);
}
void xuat(PHANSO a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nThong tin phan so thu %d\n",i);
		xuatTT(a[i]);
	}
}
void xuatLon1(PHANSO a[],int n)
{
	printf("\nCac phan so lon hon 1");
	for(int i=0;i<n;i++)
		if(a[i].mau!=0&&a[i].tu/(float)a[i].mau>1)
			xuatTT(a[i]);
}
PHANSO timMax(PHANSO a[],int n)
{
	int vt=-1;
	PHANSO sai;
	sai.tu=-1;
	sai.mau=-1;
	for(int i=0;i<n;i++)
		if(a[i].mau!=0)
		{
			vt=i;
			break;
		}
		if(vt==-1)
			return sai;
			
	int vtmax=vt;
	for(int i=vt+1;i<n;i++)
		if(a[i].mau!=0&&a[vtmax].tu/(float)a[vtmax].mau<a[i].tu/(float)a[i].mau)
			vtmax=i;
	return a[vtmax];
	
}
PHANSO timMin(PHANSO a[],int n)
{
	int vt=-1;
	PHANSO sai;
	sai.tu=-1;
	sai.mau=-1;
	for(int i=0;i<n;i++)
		if(a[i].mau!=0)
		{
			vt=i;
			break;
		}
		if(vt==-1)
			return sai;
			
	int vtmin=vt;
	for(int i=vt+1;i<n;i++)
		if(a[i].mau!=0&&a[vtmin].tu/(float)a[vtmin].mau>a[i].tu/(float)a[i].mau)
			vtmin=i;
	return a[vtmin];
	
}
int ktra(PHANSO a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].mau==0)
			return -1;
	return 1;
}
int toiGian(int a,int b)
{
	int c=abs(a);
	int d=abs(b);
	while(c!=d)
	{
		if(c>d)
			c-=d;
		else
			d-=c;
	}
	return d;
}
void tinhTong(PHANSO a[],int n)
{
	int vt=-1;
	for(int i=0;i<n;i++)
		if(a[i].mau!=0)
		{
			vt=i;
			break;
		}
		if(vt==-1)
			printf("\nPhan so khong hop le");
		else
		{
			int vtm=vt;
			for(int i=vt+1;i<n;i++)
		if(a[i].mau!=0)
		{
		a[vtm].tu=a[vtm].tu*a[i].mau+a[vtm].mau*a[i].tu;
		a[vtm].mau=a[vtm].mau*a[i].mau;
		int z=toiGian(a[vtm].tu,a[vtm].mau);
		a[vtm].tu/=z;
		a[vtm].mau/=z;
		}
		printf("\nTong cac phan so la %d/%d",a[vtm].tu,a[vtm].mau);
}
}
void xoa(PHANSO a[],int &n,int k)
{
	for(int i=k;i<n-1;i++)
		a[i]=a[i+1];
	n--;
}

void xoaLN(PHANSO a[],int &n)
{

	for(int i=1;i<n;i++)
	{	if(a[0].tu==timMax(a,n).tu&&a[0].mau==timMax(a,n).mau)
			xoa(a,n,0);
		if(a[i].tu==timMax(a,n).tu&&a[i].mau==timMax(a,n).mau)
		{xoa(a,n,i);
			i--;
			}
	}

			xuat(a,n);
}
void main()
{
	PHANSO a[54];
	int n;
	nhap(a,n);
	xuat(a,n);
	xuatLon1(a,n);
	timMax(a,n);
	if(timMin(a,n).mau==-1)
		printf("\nKhong co phan so nao hop le");
	else
		printf("\nPhan so nho nhat la %d/%d",timMin(a,n).tu,timMin(a,n).mau);	
	if(timMax(a,n).mau==-1)
		printf("\nKhong co phan so nao hop le");
	else
		printf("\nPhan so lon nhat la %d/%d",timMax(a,n).tu,timMax(a,n).mau);	
	if(ktra(a,n)==1)
		printf("\nKhong co phan so khong hop le");
	else
		printf("\nCo phan so khong hop le");
	tinhTong(a,n);
	xoaLN(a,n);
	getch();
}