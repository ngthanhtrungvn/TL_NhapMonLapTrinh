#include<string>
#include<stdio.h>
#include<conio.h>
struct DIENTHOAI
{
	char ma[11];
	char ten[21];
	char loai[11];
	float giaBan;
	int sl;
};
void nhapTT(DIENTHOAI &dt)
{
	printf("Nhap vao ma:");
	scanf("%s",&dt.ma);
	printf("Nhap vao ten:");
	fflush(stdin);
	gets(dt.ten);
	printf("Nhap vao loai:");
	fflush(stdin);
	gets(dt.loai);
	printf("Nhap vao gia ban:");
	scanf("%f",&dt.giaBan);
	printf("Nhap vao so luong:");
	scanf("%d",&dt.sl);
}
void nhap(DIENTHOAI a[],int &n)
{
	printf("Nhap vao so dien thoai:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nDien thoai thu %d\n",i);
		nhapTT(a[i]);
	}
}
void xuatTT(DIENTHOAI dt)
{
	printf("\n%s\n%s\n%s\n%.2f\n%d\n",dt.ma,dt.ten,dt.loai,dt.giaBan,dt.sl);
}
void xuat(DIENTHOAI a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nThong tin dien thoai thu %d\n",i);
		xuatTT(a[i]);
	}
}
float tinhTong(DIENTHOAI a[],int n)
{
	float s=0;
	for(int i=0;i<n;i++)
		s+=a[i].sl*a[i].giaBan;
	return s;
}
void xuatLoai(DIENTHOAI a[],int n)
{
	for(int i=0;i<n;i++)
		if(strcmp(a[i].loai,"Nokia")==0)
			xuatTT(a[i]);
}
void tim(DIENTHOAI a[],int n)
{
	for(int i=0;i<n;i++)
		if(strcmp(a[i].ten,"GalaxyY")==0)
		{
			printf("\nCo dien thoai GalaxyY\n");
			printf("Thong tin dien thoa GalaxyY\n");
			xuatTT(a[i]);
		}
		else
			printf("\nKhong co dien thoai GalaxyY\n");		
}
void main()
{
	DIENTHOAI a[43];
	int n;
	nhap(a,n);
	xuat(a,n);
	printf("\nTong tien cac dien thoai %.2f\n",tinhTong(a,n));
	printf("Thong tin dien thoai thuoc loai Nokia\n");
	xuatLoai(a,n);
	tim(a,n);
	getch();
}