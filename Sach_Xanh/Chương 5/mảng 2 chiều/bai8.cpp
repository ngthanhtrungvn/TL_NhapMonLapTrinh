#include<conio.h>
#include<stdio.h>
#define MAXCOT 50
#define MAXDONG 100
void nhapMT(int a[][MAXCOT],int &m,int &n)
{
	do
	{
		printf("Nhap so dong vao:");
		scanf("%d",&m);
		printf("Nhap so cot vao:");
		scanf("%d",&n);
	} while (n<0||m<0||n>MAXCOT||m>MAXDONG);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			{printf("Nhap a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);}
	}
}

void xuatMT(int a[][MAXCOT],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
void tich(int a[][MAXCOT],int m,int n)
{
	int t=1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			t*=a[i][j];
		printf("\nTich cac phan tu dong %d la %d",i,t);
		t=1;
	}
}
void main()
{
	int n,m;
	int a[MAXDONG][MAXCOT];
	nhapMT(a,m,n);
	printf("\nMa tran:\n");
	xuatMT(a,m,n);
	tich(a,m,n);
	getch();
}
