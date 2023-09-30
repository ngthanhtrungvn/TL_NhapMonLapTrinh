#include<conio.h>
#include<stdio.h>
#include<string>
struct DIENTHOAi
{
	char maDT[11];
	char tenDT[21];
	char NSX[21];
	float GB;
	int sl;
};
void nhapTuFile(DIENTHOAi a[],int &n);
void xuatDT(DIENTHOAi dt);
void swap(DIENTHOAi &x,DIENTHOAi &y);
void xuat(DIENTHOAi a[],int n);
void xuatSL(DIENTHOAi a[],int n);
void sapXep(DIENTHOAi a[],int n);
void xuatMa(DIENTHOAi a[],int n);
void xuatHang(DIENTHOAi a[],int n);
int dem(DIENTHOAi a[],int n,char *x);
void main()
{
	DIENTHOAi a[50];
	char x[20];
	int n;
	FILE *f=fopen("IP2.txt","r");
	nhapTuFile(a,n);
	fclose(f);
	xuat(a,n);
	sapXep(a,n);
	printf("Mang sau khi duoc sap xep:\n");
	xuat(a,n);
	printf("Cac dien thoai co so luong <10:\n");
	xuatSL(a,n);
	printf("Cac dien thoai co ma so bat dau IP la:\n");
	xuatMa(a,n);
	printf("Cac dien thoai thuoc hang SAMSUNG la:\n");
	xuatHang(a,n);
	printf("Nhap vao ten hang ban muon dem so luong san pham:");
	gets(x);
	printf("So luong hang %s la %d",x,dem(a,n,x));
	getch();
}
void nhapTuFile(DIENTHOAi a[],int &n)
{
	FILE *f=fopen("IP2.txt","r");
	fscanf(f,"%d",&n);
	char c;
	fscanf(f,"%c",&c);
	for(int i=0;i<n;i++)
	{
		fgets(a[i].maDT,20,f);
		int l=strlen(a[i].maDT);
		a[i].maDT[l-1]='\0';
		fgets(a[i].tenDT,30,f);
		l=strlen(a[i].tenDT);
		a[i].tenDT[l-1]='\0';
		fgets(a[i].NSX,30,f);
		l=strlen(a[i].NSX);
		a[i].NSX[l-1]='\0';
		fscanf(f,"%f",&a[i].GB);
		fscanf(f,"%c",&c);
		fscanf(f,"%d",&a[i].sl);
		fscanf(f,"%c",&c);
	}
	fclose(f);
}
void xuatDT(DIENTHOAi dt)
{
	printf("%s\n%s\n%s\n%.2f\n%d\n",dt.maDT,dt.tenDT,dt.NSX,dt.GB,dt.sl);
}
void xuat(DIENTHOAi a[],int n)
{
	for(int i=0;i<n;i++)
		xuatDT(a[i]);
}
void swap(DIENTHOAi &x,DIENTHOAi &y)
{
	DIENTHOAi t=x;
	x=y;y=t;
}
void sapXep(DIENTHOAi a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].GB<a[j].GB)
				swap(a[i],a[j]);
}
void xuatSL(DIENTHOAi a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].sl<10)
			xuatDT(a[i]);
}
void xuatMa(DIENTHOAi a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i].maDT[0]=='I'&&a[i].maDT[1]=='P')
			xuatDT(a[i]);
}
void xuatHang(DIENTHOAi a[],int n)
{
	for(int i=0;i<n;i++)
		if(strcmp(a[i].NSX,"SAMSUNG")==0)
			xuatDT(a[i]);
}
int dem(DIENTHOAi a[],int n,char *x)
{
	int sl=0;
	for(int i=0;i<n;i++)
		if(strcmp(a[i].NSX,x)==0)
			sl+=a[i].sl;
	return sl;
}
