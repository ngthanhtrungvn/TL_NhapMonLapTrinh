#include<conio.h>
#include<stdio.h>
#include<string>
#define NAMHT 2019
struct SINHVIEN
{
	char MSV[11];
	char ten[21];
	int namSinh;
	float diemTb;
};
void nhapTT(SINHVIEN &sv)
{
	printf("Nhap vao ma so sinh vien:");
	scanf("%s",&sv.MSV);
	printf("Nhap vao ho ten:");
	fflush(stdin);
	gets(sv.ten);
	printf("Nhap vao nam sinh:");
	scanf("%d",&sv.namSinh);
	printf("Nhap vao diem trung binh:");
	scanf("%f",&sv.diemTb);
}
void nhap(SINHVIEN a[],int &n)
{
	printf("Nhap vao so sinh vien:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nThong tin sinh vien thu %d\n",i);
		nhapTT(a[i]);
	}
}
void xuatTT(SINHVIEN sv)
{
	printf("\n%sd\n%s\n%d\n%.2f\n",sv.MSV,sv.ten,sv.namSinh,sv.diemTb);
}
void xuat(SINHVIEN a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nThong tin sinh vien thu %d\n",i);
		xuatTT(a[i]);
	}
}
void lenLop(SINHVIEN a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i].diemTb>4.9)
			dem++;
	printf("\nCo %d sinh vien len lop\n",dem);
}
int tinhTuoi(int namsinh)
{
	return NAMHT-namsinh;
}
void xuatTuoi(SINHVIEN a[],int n)
{
	printf("\nSInh vien co tuoi lon hon 20\n");
	for(int i=0;i<n;i++)
		if(tinhTuoi(a[i].namSinh)>20)
			xuatTT(a[i]);
}
void demDH(SINHVIEN a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i].MSV[2]=='D'&&a[i].MSV[3]=='H')
			dem++;
	printf("\nCo %d sinh vien he dai hoc",dem);
}
void demTen(SINHVIEN a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		char *t=strtok(a[i].ten," ");
		int j=0;
		char b[43][56];
		while(t!=NULL)
		{
			strcpy(b[j],t);
			j++;
			t=strtok(NULL," ");
		}
		if(strcmp(b[j-1],"Lan")==0)
			dem++;
	}
	printf("\nCO %d sinh vien ten LAn",dem);
}
void demHo(SINHVIEN a[],int n)
{
		int dem=0;
	for(int i=0;i<n;i++)
	{
		char *t=strtok(a[i].ten," ");
		int j=0;
		char b[43][56];
		while(t!=NULL)
		{
			strcpy(b[j],t);
			j++;
			t=strtok(NULL," ");
		}
		if(strcmp(b[0],"Phan")==0)
			dem++;
	}
	printf("\nCO %d sinh vien ho Phan",dem);

}
void main()
{
	SINHVIEN a[51];
	int n;
	nhap(a,n);
	xuat(a,n);
	lenLop(a,n);
	xuatTuoi(a,n);
	demDH(a,n);
	demTen(a,n);
	demHo(a,n);
	getch();
}